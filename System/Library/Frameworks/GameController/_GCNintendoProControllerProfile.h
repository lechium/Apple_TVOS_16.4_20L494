//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface _GCNintendoProControllerProfile
{
}

+ (id)logicalDevice:(id)arg1 makeControllerMotionWithIdentifier:(id)arg2;	// IMP=0x00800000000543d1
+ (id)logicalDevice:(id)arg1 makeControllerPhysicalInputProfileWithIdentifier:(id)arg2;	// IMP=0x00800000000542d0
+ (id)logicalDeviceControllerProductCategory:(id)arg1;	// IMP=0x00800000000542c3
+ (void)physicalDevice:(id)arg1 setSensorsActive:(_Bool)arg2;	// IMP=0x0080000000054274
+ (void)physicalDevice:(id)arg1 getSensorsEnabledWithReply:(CDUnknownBlockType)arg2;	// IMP=0x00800000000541aa
+ (_Bool)physicalDeviceSupportsMotion:(id)arg1;	// IMP=0x00800000000541a2
+ (id)physicalDeviceGetHapticCapabilityGraph:(id)arg1;	// IMP=0x0080000000054145
+ (id)physicalDeviceGetHapticCapabilities:(id)arg1;	// IMP=0x0080000000054058

@end

