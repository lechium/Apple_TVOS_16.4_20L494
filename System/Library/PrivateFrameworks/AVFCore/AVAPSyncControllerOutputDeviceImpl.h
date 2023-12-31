//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSData, NSDictionary, NSNumber, NSString;
@protocol AVOutputDeviceImpl, AVOutputDeviceImplSupport;

__attribute__((visibility("hidden")))
@interface AVAPSyncControllerOutputDeviceImpl : NSObject
{
    struct OpaqueAPSyncController *_syncController;	// 8 = 0x8
    id <AVOutputDeviceImpl> _secondaryImpl;	// 16 = 0x10
    id <AVOutputDeviceImplSupport> _implEventListener;	// 24 = 0x18
}

+ (void)registerLocalDeviceDidChangeListener:(Class)arg1;	// IMP=0x0010000000006f1a
+ (void)localDeviceWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000006db1
- (void).cxx_destruct;	// IMP=0x0000000000008429
@property(readonly) id <AVOutputDeviceImpl> secondaryImpl; // @synthesize secondaryImpl=_secondaryImpl;
@property __weak id <AVOutputDeviceImplSupport> implEventListener; // @synthesize implEventListener=_implEventListener;
- (void)configureUsingBlock:(CDUnknownBlockType)arg1 options:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000000083ea
- (_Bool)supportsFitnessDataDestination;	// IMP=0x00000000000083d4
@property(readonly, nonatomic) _Bool canRelayCommunicationChannel;
@property(readonly, nonatomic) _Bool canCommunicateWithAllLogicalDeviceMembers;
@property(readonly, nonatomic) _Bool isLogicalDeviceLeader;
@property(readonly, nonatomic) NSString *logicalDeviceID;
@property(readonly, nonatomic) _Bool groupContainsGroupLeader;
@property(readonly, nonatomic) _Bool participatesInGroupPlayback;
@property(readonly, nonatomic) _Bool isGroupLeader;
@property(readonly, nonatomic) _Bool canBeGroupLeader;
- (void)_proposedGroupIDDidChangeForEndpointWithID:(struct __CFString *)arg1;	// IMP=0x00000000000081b3
@property(readonly, copy, nonatomic) NSString *proposedGroupID;
@property(readonly, copy, nonatomic) NSString *groupID;
@property(readonly, nonatomic) _Bool canBeGrouped;
- (void)decreaseVolumeByCount:(long long)arg1;	// IMP=0x00000000000080f9
- (void)increaseVolumeByCount:(long long)arg1;	// IMP=0x00000000000080f3
- (void)setVolume:(float)arg1;	// IMP=0x0000000000008079
- (void)_volumeControlTypeDidChangeForEndpointWithID:(struct __CFString *)arg1;	// IMP=0x000000000000800f
@property(readonly) long long volumeControlType;
- (void)_volumeControlSupportedDidChangeForEndpointWithID:(struct __CFString *)arg1;	// IMP=0x0000000000007eea
@property(readonly) _Bool canSetVolume;
- (void)_volumeDidChangeForEndpointWithID:(struct __CFString *)arg1;	// IMP=0x0000000000007e1c
@property(readonly) float volume;
@property(readonly, nonatomic, getter=isHeadTrackedSpatialAudioActive) _Bool headTrackedSpatialAudioActive;
- (_Bool)setHeadTrackedSpatialAudioMode:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000007d8c
@property(readonly, nonatomic) NSString *headTrackedSpatialAudioMode;
- (_Bool)setAllowsHeadTrackedSpatialAudio:(_Bool)arg1 error:(id *)arg2;	// IMP=0x0000000000007d60
@property(readonly, nonatomic) _Bool allowsHeadTrackedSpatialAudio;
@property(readonly, nonatomic) _Bool supportsHeadTrackedSpatialAudio;
@property(readonly, nonatomic) long long HAPConformance;
- (void)setSecondDisplayMode:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000007d08
- (void)setSecondDisplayEnabled:(_Bool)arg1;	// IMP=0x0000000000007cf2
- (_Bool)setCurrentBluetoothListeningMode:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000007cdc
@property(readonly, nonatomic) NSString *currentBluetoothListeningMode;
@property(readonly, nonatomic) NSArray *availableBluetoothListeningModes;
@property(readonly, nonatomic) _Bool supportsBluetoothSharing;
@property(readonly, nonatomic) _Bool presentsOptimizedUserInterfaceWhenPlayingFetchedAudioOnlyAssets;
@property(readonly, nonatomic) _Bool canFetchMediaDataFromSender;
@property(readonly, nonatomic) _Bool canPlayEncryptedProgressiveDownloadAssets;
@property(readonly, nonatomic) _Bool supportsBufferedAirPlay;
@property(readonly, nonatomic) _Bool canAccessiCloudMusicLibrary;
@property(readonly, nonatomic) _Bool canAccessAppleMusic;
@property(readonly, nonatomic) _Bool canAccessRemoteAssets;
@property(readonly, nonatomic) _Bool onlyAllowsConnectionsFromPeersInHomeGroup;
@property(readonly, nonatomic) _Bool automaticallyAllowsConnectionsFromPeersInHomeGroup;
@property(readonly, nonatomic) _Bool requiresAuthorization;
@property(readonly, nonatomic) unsigned long long deviceFeatures;
@property(readonly, copy, nonatomic) NSArray *connectedPairedDevices;
@property(readonly, nonatomic, getter=isInUseByPairedDevice) _Bool inUseByPairedDevice;
@property(readonly, nonatomic) NSDictionary *airPlayProperties;
@property(readonly, nonatomic) NSNumber *isInEar;
@property(readonly, nonatomic) NSNumber *supportsDataOverACLProtocol;
@property(readonly, nonatomic) NSNumber *rightBatteryLevel;
@property(readonly, nonatomic) NSNumber *leftBatteryLevel;
@property(readonly, nonatomic) NSNumber *caseBatteryLevel;
@property(readonly, nonatomic) NSNumber *batteryLevel;
@property(readonly, nonatomic) NSString *clusterID;
@property(readonly, nonatomic, getter=isEligibleToBePredictedOutputDevice) _Bool eligibleToBePredictedOutputDevice;
@property(readonly, nonatomic, getter=isAppleAccessory) _Bool appleAccessory;
@property(readonly, nonatomic) _Bool producesLowFidelityAudio;
@property(readonly, nonatomic) _Bool isClusterLeader;
@property(readonly, nonatomic) NSArray *clusteredDeviceDescriptions;
@property(readonly, copy, nonatomic) NSData *identifyingMACAddress;
@property(readonly, nonatomic) NSString *firmwareVersion;
@property(readonly, nonatomic) NSString *serialNumber;
@property(readonly, copy, nonatomic) NSString *modelID;
@property(readonly, nonatomic) NSString *manufacturer;
@property(readonly, nonatomic) long long configuredClusterSize;
@property(readonly, nonatomic) long long clusterType;
@property(readonly, nonatomic) long long deviceSubType;
@property(readonly, nonatomic) long long deviceType;
@property(readonly, copy, nonatomic) NSString *ID;
@property(readonly, copy, nonatomic) NSString *name;
- (void)dealloc;	// IMP=0x0000000000007652
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000075c2
- (id)initWithSyncController:(struct OpaqueAPSyncController *)arg1 secondaryImpl:(id)arg2;	// IMP=0x000000000000703e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

