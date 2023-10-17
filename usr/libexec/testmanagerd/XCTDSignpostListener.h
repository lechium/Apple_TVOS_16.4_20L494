//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface XCTDSignpostListener : NSObject
{
    NSMutableDictionary *_tokensToExtractors;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x002000000001b014
@property(readonly) NSMutableDictionary *tokensToExtractors; // @synthesize tokensToExtractors=_tokensToExtractors;
- (void)dealloc;	// IMP=0x001000000001ae5a
- (void)unregisterForSignpostsWithToken:(id)arg1;	// IMP=0x001000000001ada8
- (id)registerForSignpostsFromSubsystem:(id)arg1 category:(id)arg2 intervalTimeout:(double)arg3 error:(id *)arg4 handler:(CDUnknownBlockType)arg5;	// IMP=0x001000000001aaa9
- (id)init;	// IMP=0x001000000001aa58

@end

