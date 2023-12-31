//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, PHPhotoLibrary;
@protocol OS_dispatch_queue;

@interface VCPSceneProcessingChangeBatch : NSObject
{
    PHPhotoLibrary *_photoLibrary;	// 8 = 0x8
    NSMutableArray *_pendingChanges;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_publishQueue;	// 24 = 0x18
}

+ (id)batchForPhotoLibrary:(id)arg1;	// IMP=0x00400000000ca3c2
- (void).cxx_destruct;	// IMP=0x00200000000cab8d
- (void)publishWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000000ca734
- (int)updateAsset:(id)arg1 withAnalysis:(id)arg2;	// IMP=0x00100000000ca430
- (id)initWithPhotoLibrary:(id)arg1;	// IMP=0x00100000000ca2e8

@end

