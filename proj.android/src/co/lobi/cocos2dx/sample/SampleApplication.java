package co.lobi.cocos2dx.sample;

import android.app.Application;

import com.kayac.nakamap.sdk.Nakamap;

public class SampleApplication extends Application {
    private static final String CLIENT_ID = "d534747a58dba2003deb451bc49fdce211eed4bb";
    
    @Override
    public void onCreate() {
        super.onCreate();
        
        // setup sample
        Nakamap.setup(
            getApplicationContext(),
            CLIENT_ID,
            "cocos2d-x user");
    }
}
