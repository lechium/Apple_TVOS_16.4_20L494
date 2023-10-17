//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AWAttentionAwarenessClient, AWAttentionAwarenessConfiguration, NSMutableDictionary, NSString;
@protocol BLSHUserIdleProvidingDelegate;

__attribute__((visibility("hidden")))
@interface BLSHUserIdleProvider : NSObject
{
    _Bool _shouldNotifyOfUnidle;	// 8 = 0x8
    _Bool _shouldNotifyOfUnidleChanged;	// 9 = 0x9
    id <BLSHUserIdleProvidingDelegate> _delegate;	// 16 = 0x10
    double _idleTimeout;	// 24 = 0x18
    AWAttentionAwarenessClient *_attentionAwarenessClient;	// 32 = 0x20
    AWAttentionAwarenessConfiguration *_attentionAwarenessConfiguration;	// 40 = 0x28
    NSMutableDictionary *_attentionLostTimeoutDictionary;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000000067004
@property(nonatomic) _Bool shouldNotifyOfUnidleChanged; // @synthesize shouldNotifyOfUnidleChanged=_shouldNotifyOfUnidleChanged;
@property(retain, nonatomic) NSMutableDictionary *attentionLostTimeoutDictionary; // @synthesize attentionLostTimeoutDictionary=_attentionLostTimeoutDictionary;
@property(retain, nonatomic) AWAttentionAwarenessConfiguration *attentionAwarenessConfiguration; // @synthesize attentionAwarenessConfiguration=_attentionAwarenessConfiguration;
@property(retain, nonatomic) AWAttentionAwarenessClient *attentionAwarenessClient; // @synthesize attentionAwarenessClient=_attentionAwarenessClient;
@property(readonly, nonatomic) double idleTimeout; // @synthesize idleTimeout=_idleTimeout;
@property(nonatomic) _Bool shouldNotifyOfUnidle; // @synthesize shouldNotifyOfUnidle=_shouldNotifyOfUnidle;
@property(nonatomic) __weak id <BLSHUserIdleProvidingDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_invalidate;	// IMP=0x0000000000066eac
- (void)_reset;	// IMP=0x0000000000066e1c
- (void)_resume;	// IMP=0x0000000000066d98
- (void)_pause;	// IMP=0x0000000000066d14
- (void)_setShouldNotifyOfUnidle:(_Bool)arg1;	// IMP=0x0000000000066c63
- (void)_setIdleTimeout:(double)arg1 shouldReset:(_Bool)arg2;	// IMP=0x00000000000668d6
- (void)invalidate;	// IMP=0x0000000000066879
- (void)reset;	// IMP=0x000000000006681c
- (void)pause;	// IMP=0x00000000000667bf
- (void)resume;	// IMP=0x0000000000066762
- (void)setIdleTimeout:(double)arg1 shouldReset:(_Bool)arg2;	// IMP=0x000000000006668a
- (id)init;	// IMP=0x00000000000662d8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

