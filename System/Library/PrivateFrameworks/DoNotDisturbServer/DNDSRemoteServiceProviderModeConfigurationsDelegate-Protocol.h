//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <DoNotDisturbServer/NSObject-Protocol.h>

@class DNDContactHandle, DNDModeConfiguration, DNDSRemoteServiceProvider, NSArray, NSDictionary, NSString;

@protocol DNDSRemoteServiceProviderModeConfigurationsDelegate <NSObject>
- (NSString *)remoteServiceProvider:(DNDSRemoteServiceProvider *)arg1 publishStatusKitAvailabilityReturningError:(id *)arg2;
- (_Bool)remoteServiceProvider:(DNDSRemoteServiceProvider *)arg1 userAvailabilityInActiveModeForContactHandle:(DNDContactHandle *)arg2 withError:(id *)arg3;
- (NSArray *)remoteServiceProvider:(DNDSRemoteServiceProvider *)arg1 silencedModesForContactHandle:(DNDContactHandle *)arg2 withError:(id *)arg3;
- (NSArray *)remoteServiceProvider:(DNDSRemoteServiceProvider *)arg1 allowedModesForContactHandle:(DNDContactHandle *)arg2 withError:(id *)arg3;
- (_Bool)remoteServiceProvider:(DNDSRemoteServiceProvider *)arg1 syncModeConfigurationsReturningError:(id *)arg2;
- (NSArray *)remoteServiceProvider:(DNDSRemoteServiceProvider *)arg1 availableModesReturningError:(id *)arg2;
- (NSArray *)remoteServiceProvider:(DNDSRemoteServiceProvider *)arg1 allModesReturningError:(id *)arg2;
- (_Bool)remoteServiceProvider:(DNDSRemoteServiceProvider *)arg1 setModeConfiguration:(DNDModeConfiguration *)arg2 withError:(id *)arg3;
- (_Bool)remoteServiceProvider:(DNDSRemoteServiceProvider *)arg1 removeModeConfigurationWithModeIdentifier:(NSString *)arg2 deletePlaceholder:(_Bool)arg3 withError:(id *)arg4;
- (NSDictionary *)remoteServiceProvider:(DNDSRemoteServiceProvider *)arg1 modeConfigurationsWithError:(id *)arg2;
- (DNDModeConfiguration *)remoteServiceProvider:(DNDSRemoteServiceProvider *)arg1 modeConfigurationForModeIdentifier:(NSString *)arg2 withError:(id *)arg3;
@end

