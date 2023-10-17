//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MRAVDistantEndpoint, MRDAVHostedExternalDevicePendingClientStateOutputDeviceModifications, NSError, NSMutableDictionary, NSNumber, NSString;

@interface MRDAVHostedExternalDevicePendingClientState : NSObject
{
    unsigned int _connectionState;	// 8 = 0x8
    NSError *_connectionStateError;	// 16 = 0x10
    NSString *_name;	// 24 = 0x18
    MRAVDistantEndpoint *_endpoint;	// 32 = 0x20
    NSNumber *_volume;	// 40 = 0x28
    NSNumber *_volumeCapabilities;	// 48 = 0x30
    NSMutableDictionary *_outputDeviceVolume;	// 56 = 0x38
    NSMutableDictionary *_outputDeviceVolumeCapabilities;	// 64 = 0x40
    MRDAVHostedExternalDevicePendingClientStateOutputDeviceModifications *_outputDeviceModifications;	// 72 = 0x48
    NSMutableDictionary *_discoverySessionConfigurationsResults;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x002000000002295a
@property(retain, nonatomic) NSMutableDictionary *discoverySessionConfigurationsResults; // @synthesize discoverySessionConfigurationsResults=_discoverySessionConfigurationsResults;
@property(retain, nonatomic) MRDAVHostedExternalDevicePendingClientStateOutputDeviceModifications *outputDeviceModifications; // @synthesize outputDeviceModifications=_outputDeviceModifications;
@property(retain, nonatomic) NSMutableDictionary *outputDeviceVolumeCapabilities; // @synthesize outputDeviceVolumeCapabilities=_outputDeviceVolumeCapabilities;
@property(retain, nonatomic) NSMutableDictionary *outputDeviceVolume; // @synthesize outputDeviceVolume=_outputDeviceVolume;
@property(retain, nonatomic) NSNumber *volumeCapabilities; // @synthesize volumeCapabilities=_volumeCapabilities;
@property(retain, nonatomic) NSNumber *volume; // @synthesize volume=_volume;
@property(retain, nonatomic) MRAVDistantEndpoint *endpoint; // @synthesize endpoint=_endpoint;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSError *connectionStateError; // @synthesize connectionStateError=_connectionStateError;
@property(nonatomic) unsigned int connectionState; // @synthesize connectionState=_connectionState;
- (id)description;	// IMP=0x0010000000022460

@end

