//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CFNetwork/NSURLSessionTaskDelegate-Protocol.h>

@class NSString;

@interface PACURLSessionDelegate : NSObject <NSURLSessionTaskDelegate>
{
    NSString *_username;	// 8 = 0x8
    NSString *_password;	// 16 = 0x10
}

- (void)URLSession:(id)arg1 task:(id)arg2 didReceiveChallenge:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000000016c68c
- (void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000016c4e7
- (void)dealloc;	// IMP=0x000000000016c493

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

