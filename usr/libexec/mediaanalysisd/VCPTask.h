//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSOperation.h>

@class PHPhotoLibrary;

@interface VCPTask : NSOperation
{
    int _error;	// 8 = 0x8
    CDUnknownBlockType _cancel;	// 16 = 0x10
    CDUnknownBlockType _progressHandler;	// 24 = 0x18
    PHPhotoLibrary *_photoLibrary;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00200000000d566c
@property(readonly, nonatomic) PHPhotoLibrary *photoLibrary; // @synthesize photoLibrary=_photoLibrary;
@property(copy, nonatomic) CDUnknownBlockType progressHandler; // @synthesize progressHandler=_progressHandler;
@property(readonly, nonatomic) int error; // @synthesize error=_error;
@property(copy, nonatomic) CDUnknownBlockType cancel; // @synthesize cancel=_cancel;
- (void)main;	// IMP=0x00100000000d55cf
- (int)mainInternal;	// IMP=0x00100000000d55c4
- (_Bool)isCancelled;	// IMP=0x00100000000d5574
- (id)initWithPhotoLibrary:(id)arg1;	// IMP=0x00100000000d54c0
- (id)init;	// IMP=0x00100000000d54b2

@end

