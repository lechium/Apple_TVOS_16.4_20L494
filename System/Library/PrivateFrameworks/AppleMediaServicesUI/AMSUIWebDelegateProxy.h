//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface AMSUIWebDelegateProxy : NSObject
{
    id _delegate;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000006bab5
@property(nonatomic) __weak id delegate; // @synthesize delegate=_delegate;
- (void)forwardInvocation:(id)arg1;	// IMP=0x000000000006ba88
- (id)methodSignatureForSelector:(SEL)arg1;	// IMP=0x000000000006ba22
- (_Bool)respondsToSelector:(SEL)arg1;	// IMP=0x000000000006b9a9
- (id)forwardingTargetForSelector:(SEL)arg1;	// IMP=0x000000000006b905
- (id)initWithDelegate:(id)arg1;	// IMP=0x000000000006b8a1

@end
