//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableDictionary;
@protocol GTServiceProvider;

__attribute__((visibility("hidden")))
@interface GTServiceProviderXPCDispatcher
{
    id <GTServiceProvider> _serviceProvider;	// 8 = 0x8
    NSMutableDictionary *_registeredConnections;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000001cc82
- (void)deregisterObserver_:(id)arg1 replyConnection:(id)arg2;	// IMP=0x000000000001cbe3
- (void)registerObserver_:(id)arg1 replyConnection:(id)arg2;	// IMP=0x000000000001cb10
- (void)deregisterService_:(id)arg1 replyConnection:(id)arg2;	// IMP=0x000000000001ca85
- (void)waitForService_error_:(id)arg1 replyConnection:(id)arg2;	// IMP=0x000000000001c95e
- (void)waitForService_completionHandler_:(id)arg1 replyConnection:(id)arg2;	// IMP=0x000000000001c837
- (void)registerService_forProcess_:(id)arg1 replyConnection:(id)arg2;	// IMP=0x000000000001c65f
- (void)allServices:(id)arg1 replyConnection:(id)arg2;	// IMP=0x000000000001c5aa
- (void)setConnections:(id)arg1;	// IMP=0x000000000001c596
- (id)initWithService:(id)arg1 properties:(id)arg2;	// IMP=0x000000000001c4f6

@end

