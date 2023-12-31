//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSURLSession, NSURLSessionConfiguration;

@interface __NSCFURLSessionTaskGroup : NSObject
{
    NSURLSessionConfiguration *_groupConfiguration_ivar;	// 8 = 0x8
    NSURLSession *_groupSession_ivar;	// 16 = 0x10
}

- (id)uploadTaskWithStreamedRequest:(id)arg1;	// IMP=0x00000000001bdbdd
- (id)dataTaskWithRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000001bdb62
- (id)dataTaskWithRequest:(id)arg1;	// IMP=0x00000000001bdafa
- (id)forwardingTargetForSelector:(SEL)arg1;	// IMP=0x00000000001bdac9
- (void)dealloc;	// IMP=0x00000000001bda7f
@property(readonly) __weak NSURLSession *_groupSession; // @dynamic _groupSession;
@property(readonly) __weak NSURLSessionConfiguration *_groupConfiguration; // @dynamic _groupConfiguration;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

