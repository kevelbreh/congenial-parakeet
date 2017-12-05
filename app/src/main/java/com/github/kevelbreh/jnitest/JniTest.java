package com.github.kevelbreh.jnitest;

public class JniTest {

  static {
    System.loadLibrary("native-lib");
  }

  public native String stringFromJNI();
}
