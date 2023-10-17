//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AMSUIWebClientContext, NSString, NSURL;

__attribute__((visibility("hidden")))
@interface AMSUIWebOpenURLAction
{
    NSURL *_URL;	// 8 = 0x8
    long long _type;	// 16 = 0x10
}

+ (id)_openIgnoringOverrides:(id)arg1;	// IMP=0x001000000008a908
+ (id)_openUniversalLink:(id)arg1;	// IMP=0x001000000008a66c
- (void).cxx_destruct;	// IMP=0x000000000008aace
@property(nonatomic) long long type; // @synthesize type=_type;
@property(retain, nonatomic) NSURL *URL; // @synthesize URL=_URL;
- (id)runAction;	// IMP=0x000000000008a0e8
- (id)initWithJSObject:(id)arg1 context:(id)arg2;	// IMP=0x0000000000089eb8

// Remaining properties
@property(readonly, nonatomic) AMSUIWebClientContext *context;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

