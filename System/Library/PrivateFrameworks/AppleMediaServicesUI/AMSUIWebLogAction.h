//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AMSUIWebClientContext, NSString;

__attribute__((visibility("hidden")))
@interface AMSUIWebLogAction
{
    _Bool _sensitive;	// 8 = 0x8
    long long _level;	// 16 = 0x10
    NSString *_message;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000081fa8
@property(nonatomic) _Bool sensitive; // @synthesize sensitive=_sensitive;
@property(retain, nonatomic) NSString *message; // @synthesize message=_message;
@property(nonatomic) long long level; // @synthesize level=_level;
- (unsigned char)_logTypeFromLevel:(long long)arg1;	// IMP=0x0000000000081f0e
- (id)runAction;	// IMP=0x0000000000081cf7
- (id)initWithJSObject:(id)arg1 context:(id)arg2;	// IMP=0x0000000000081b35

// Remaining properties
@property(readonly, nonatomic) AMSUIWebClientContext *context;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

