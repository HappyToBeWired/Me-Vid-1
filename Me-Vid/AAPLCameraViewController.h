/*
Copyright (C) 2015 Apple Inc. All Rights Reserved.
See LICENSE.txt for this sample’s licensing information

Abstract:
View controller for camera interface.
*/

@import UIKit;
@class AAPLPreviewView;
@protocol AAPLCameraDelegate;

@interface AAPLCameraViewController : UIViewController
@property (nonatomic, weak) IBOutlet AAPLPreviewView *_previewView;
@property (retain) id <AAPLCameraDelegate> delegate;
- (void)toggleMovieRecording;

@end
