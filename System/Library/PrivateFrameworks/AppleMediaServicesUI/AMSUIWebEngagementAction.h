//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AMSUIWebClientContext, NSArray, NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface AMSUIWebEngagementAction
{
    NSDictionary *_event;	// 8 = 0x8
    NSArray *_messagePlacements;	// 16 = 0x10
    NSString *_messageServiceType;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000006e5cd
@property(readonly, nonatomic) NSString *messageServiceType; // @synthesize messageServiceType=_messageServiceType;
@property(readonly, nonatomic) NSArray *messagePlacements; // @synthesize messagePlacements=_messagePlacements;
@property(readonly, nonatomic) NSDictionary *event; // @synthesize event=_event;
- (id)runAction;	// IMP=0x000000000006deb1
- (id)initWithJSObject:(id)arg1 context:(id)arg2;	// IMP=0x000000000006dc87

// Remaining properties
@property(readonly, nonatomic) AMSUIWebClientContext *context;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

