//
//  APPLCameraDelegate.h
//  MeSay
//
//  Created by Alex Gallacher on 28/09/2016.
//  Copyright © 2016 Alex Gallacher. All rights reserved.
//



@protocol AAPLCameraDelegate <NSObject>
-(void)shouldEnableRecordUI:(BOOL)Enable;
-(void)shouldEnableCameraUI:(BOOL)Enable;
-(void)recordingHasStarted;
-(void)canStartRecording;
@end
