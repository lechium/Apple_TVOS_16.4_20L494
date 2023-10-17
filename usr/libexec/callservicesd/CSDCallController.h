//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CSDCallStateController, MISSING_TYPE;
@protocol CSDCallContainer;

@interface CSDCallController : NSObject
{
    MISSING_TYPE *callStateController;	// 8 = 0x8
    MISSING_TYPE *callChanged;	// 16 = 0x10
    MISSING_TYPE *dataSources;	// 32 = 0x20
    MISSING_TYPE *dirtyCallManager;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x004000000021c000
- (id)init;	// IMP=0x001000000021bfa0
- (void)registerCall:(id)arg1;	// IMP=0x001000000021bf50
- (id)initWithDataSources:(id)arg1 queue:(id)arg2;	// IMP=0x001000000021bd00
@property(nonatomic, readonly) id <CSDCallContainer> callContainer;
@property(nonatomic, copy) CDUnknownBlockType callChanged;
@property(nonatomic) __weak CSDCallStateController *callStateController; // @synthesize callStateController;

@end
