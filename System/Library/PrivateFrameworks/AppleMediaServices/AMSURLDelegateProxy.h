//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AMSURLSession;

__attribute__((visibility("hidden")))
@interface AMSURLDelegateProxy : NSObject
{
    AMSURLSession *_session;	// 8 = 0x8
    id _delegate;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000003339f9
@property(nonatomic) __weak id delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) __weak AMSURLSession *session; // @synthesize session=_session;
- (void)forwardInvocation:(id)arg1;	// IMP=0x00000000003339b6
- (id)methodSignatureForSelector:(SEL)arg1;	// IMP=0x0000000000333950
- (_Bool)respondsToSelector:(SEL)arg1;	// IMP=0x000000000033389e
- (id)forwardingTargetForSelector:(SEL)arg1;	// IMP=0x00000000003337bf
- (void)invalidate;	// IMP=0x0000000000333797
- (id)initWithSession:(id)arg1 delegate:(id)arg2;	// IMP=0x0000000000333705

@end
