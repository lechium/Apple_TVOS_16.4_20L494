//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AVFCapture/AVCaptureMetadataOutputObjectsDelegate-Protocol.h>

@class AVCaptureConnection, AVCaptureOutput, NSArray, NSSet;

@protocol AVCaptureMetadataOutputObjectsDelegatePrivate <AVCaptureMetadataOutputObjectsDelegate>

@optional
- (void)captureOutput:(AVCaptureOutput *)arg1 didOutputMetadataObjects:(NSArray *)arg2 forMetadataObjectTypes:(NSSet *)arg3 fromConnection:(AVCaptureConnection *)arg4;
@end

