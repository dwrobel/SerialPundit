/*
 * Author : Rishi Gupta
 * 
 * This file is part of 'serial communication manager' library.
 *
 * The 'serial communication manager' is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by the Free Software 
 * Foundation, either version 3 of the License, or (at your option) any later version.
 *
 * The 'serial communication manager' is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A 
 * PARTICULAR PURPOSE.  See the GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with serial communication manager. If not, see <http://www.gnu.org/licenses/>.
 */

package test83;

import com.embeddedunveiled.serial.SerialComManager;
import com.embeddedunveiled.serial.hid.SerialComHID;
import com.embeddedunveiled.serial.hid.SerialComRawHID;

class CloseHIDDevice extends Test83 implements Runnable {
	@Override
	public void run() {
		try {
			Thread.sleep(1000); // make sure closed is called after read is blocked
			System.out.println("closing HID handle...");

			System.out.println("\nunblockBlockingHIDIOOperationR : " + scrh.unblockBlockingHIDIOOperationR(context));

			System.out.println("\ncloseHidDevice : " + scrh.closeHidDeviceR(handle));
			System.out.println("closed HID handle !");

			System.out.println("\ndestroyBlockingIOContextR : " + scrh.destroyBlockingIOContextR(context));
		} catch (Exception e) {
			e.printStackTrace();
		}
	}
}

// tested with MCP2200 for HID raw mode communication
public class Test83  {

	public static SerialComManager scm = null;
	public static SerialComRawHID scrh = null;
	public static int osType = 0;
	public static int ret = 0;
	public static String PORT = null;
	public static long handle = 0;
	public static long context = 0;
	public static byte[] inputReportBuffer = new byte[32];
	private static Thread mThread = null;

	public static void main(String[] args) {

		try {
			scm = new SerialComManager();
			scrh = (SerialComRawHID) scm.getSerialComHIDInstance(SerialComHID.MODE_RAW, null, null);
		} catch (Exception e) {
			e.printStackTrace();
		}

		osType = scm.getOSType();
		if(osType == SerialComManager.OS_LINUX) {
			PORT = "/dev/hidraw1";
		}else if(osType == SerialComManager.OS_WINDOWS) {
			PORT = "HID\\VID_04D8&PID_00DF&MI_02\\7&33842c3f&0&0000";
		}else if(osType == SerialComManager.OS_MAC_OS_X) {
			PORT = null;
		}else if(osType == SerialComManager.OS_SOLARIS) {
			PORT = null;
		}else{
		}

		try {
			// opened handle : 5
			handle = scrh.openHidDeviceR(PORT, true);
			System.out.println("\nopened handle : " + handle);
		} catch (Exception e) {
			e.printStackTrace();
		}

		try {
			context = scrh.createBlockingHIDIOContextR();
		} catch (Exception e) {
			e.printStackTrace();
		}

		mThread = new Thread(new CloseHIDDevice());
		mThread.start();
		System.out.println("1- proccedding to call read which will block because of no data !");

		try {
			ret = scrh.readInputReportR(handle, inputReportBuffer, context);
			System.out.println("\nreadInputReport : " + ret);
		} catch (Exception e) {
			e.printStackTrace();
		}

		System.out.println("main thread, in.read() returned from blocked read !");

		//Test again ---------------------------------------------------------------------
		try {
			Thread.sleep(1000);
		} catch (InterruptedException e) {
			e.printStackTrace();
		}

		try {
			// opened handle : 5
			handle = scrh.openHidDeviceR(PORT, true);
			System.out.println("\nopened handle : " + handle);
		} catch (Exception e) {
			e.printStackTrace();
		}

		try {
			context = scrh.createBlockingHIDIOContextR();
		} catch (Exception e) {
			e.printStackTrace();
		}

		mThread = new Thread(new CloseHIDDevice());
		mThread.start();
		System.out.println("1- proccedding to call read which will block because of no data !");

		try {
			ret = scrh.readInputReportR(handle, inputReportBuffer, context);
			System.out.println("\nreadInputReport : " + ret);
		} catch (Exception e) {
			e.printStackTrace();
		}

		System.out.println("main thread, in.read() returned from blocked read !");
	}
}