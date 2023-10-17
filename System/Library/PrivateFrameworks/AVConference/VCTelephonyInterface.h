//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol VCTelephonyInterfaceDelegate;

__attribute__((visibility("hidden")))
@interface VCTelephonyInterface : NSObject
{
    id _delegate;	// 8 = 0x8
}

- (void)notifyCodecModeChangeEventToCT:(struct _VCAudioCodecModeChangeEvent)arg1;	// IMP=0x00000000003df8b9
- (id)translateVocoderTypeToCoreAudioType:(id)arg1;	// IMP=0x00000000003df887
- (void)handleVocoderNotificationWithInfo:(id)arg1;	// IMP=0x00000000003df881
- (void)handleTelephonyNotification:(id)arg1 withInfo:(id)arg2;	// IMP=0x00000000003df87b
- (void)queryAnbrBitrateRecommendation:(unsigned int)arg1 direction:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000003df875
- (void)getAnbrActivationStateWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000003df86f
@property id <VCTelephonyInterfaceDelegate> delegate;
- (void)unregisterForNotifications;	// IMP=0x00000000003df84a
- (_Bool)registerForNotifications;	// IMP=0x00000000003df842
- (void)setupVCMediaStreamRateAdaptationConfig:(struct tagVCMediaStreamRateAdaptationConfig *)arg1;	// IMP=0x00000000003df588
- (unsigned int)validateCarrierBundleConfigParameters:(id)arg1 forKey:(id)arg2 defaultValue:(unsigned int)arg3 minValue:(unsigned int)arg4 maxValue:(unsigned int)arg5;	// IMP=0x00000000003df3a4
- (_Bool)getCarrierBundleValue:(id *)arg1 forKey:(id)arg2;	// IMP=0x00000000003df39c
- (void)dealloc;	// IMP=0x00000000003df34a
- (id)initWithTelephonySubscriptionSlot:(long long)arg1;	// IMP=0x00000000003df338
- (id)init;	// IMP=0x00000000003df330

@end

