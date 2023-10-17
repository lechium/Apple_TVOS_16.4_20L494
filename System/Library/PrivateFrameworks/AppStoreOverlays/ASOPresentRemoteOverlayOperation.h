//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSOperation.h>

@class ASORemoteOverlay;

__attribute__((visibility("hidden")))
@interface ASOPresentRemoteOverlayOperation : NSOperation
{
    _Bool _isExecuting;	// 8 = 0x8
    _Bool _isFinished;	// 9 = 0x9
    ASORemoteOverlay *_remoteOverlay;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000006314
@property _Bool isFinished; // @synthesize isFinished=_isFinished;
@property _Bool isExecuting; // @synthesize isExecuting=_isExecuting;
@property(retain, nonatomic) ASORemoteOverlay *remoteOverlay; // @synthesize remoteOverlay=_remoteOverlay;
- (void)start;	// IMP=0x0000000000006045
- (void)finishExecuting;	// IMP=0x0000000000005f42
- (void)cancel;	// IMP=0x0000000000005e81
- (id)initWithRemoteOverlay:(id)arg1;	// IMP=0x0000000000005e13

@end

