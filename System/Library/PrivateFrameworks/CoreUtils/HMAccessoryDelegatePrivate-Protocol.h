//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreUtils/HMAccessoryDelegate-Protocol.h>

@class ACAccount, HMAccessory, HMAccessorySettings, HMCharacteristic, HMDevice, HMFPairingIdentity, HMFSoftwareVersion, HMFWiFiNetworkInfo, HMService, HMSymptomsHandler, NSString;

@protocol HMAccessoryDelegatePrivate <HMAccessoryDelegate>

@optional
- (void)accessoryDidUpdateSupportsRMVonAppleTV:(HMAccessory *)arg1;
- (void)accessory:(HMAccessory *)arg1 didUpdateWifiNetworkInfo:(HMFWiFiNetworkInfo *)arg2;
- (void)accessoryDidUpdatePendingConfigurationIdentifier:(HMAccessory *)arg1;
- (void)accessory:(HMAccessory *)arg1 didUpdateSupportsWalletKey:(_Bool)arg2;
- (void)accessoryDidUpdatePreferredMediaUser:(HMAccessory *)arg1;
- (void)accessoryDidUpdateSupportsPreferredMediaUser:(HMAccessory *)arg1;
- (void)accessoryDidSetHasOnboardedForNaturalLighting:(HMAccessory *)arg1;
- (void)accessoryDidUpdateDiagnosticsTransferSupport:(HMAccessory *)arg1;
- (void)accessoryDidUpdateAudioDestination:(HMAccessory *)arg1;
- (void)accessoryDidUpdateAudioDestinationController:(HMAccessory *)arg1;
- (void)accessoryDidUpdatePairingIdentity:(HMAccessory *)arg1;
- (void)accessory:(HMAccessory *)arg1 didUpdateDevice:(HMDevice *)arg2;
- (void)accessoryDidUpdateReachableTransports:(HMAccessory *)arg1;
- (void)accessory:(HMAccessory *)arg1 didUpdateLastKnownOperatingStateResponseForService:(HMService *)arg2;
- (void)accessory:(HMAccessory *)arg1 didUpdateLastKnownSleepDiscoveryModeForService:(HMService *)arg2;
- (void)accessoryDidUpdateSupportsDropIn:(HMAccessory *)arg1;
- (void)accessoryDidUpdateSupportsAudioAnalysis:(HMAccessory *)arg1;
- (void)accessoryDidUpdateSupportsDoorbellChime:(HMAccessory *)arg1;
- (void)accessoryDidUpdateSupportsThirdPartyMusic:(HMAccessory *)arg1;
- (void)accessoryDidUpdateSupportsMediaActions:(HMAccessory *)arg1;
- (void)accessoryDidUpdateSupportsAnnounce:(HMAccessory *)arg1;
- (void)accessoryDidUpdateSupportsMusicAlarm:(HMAccessory *)arg1;
- (void)accessoryDidUpdateSupportsCompanionInitiatedRestart:(HMAccessory *)arg1;
- (void)accessoryDidUpdateAudioReturnChannelSupport:(HMAccessory *)arg1;
- (void)accessoryDidUpdateMultiUserSupport:(HMAccessory *)arg1;
- (void)accessoryDidRemoveSymptomsHandler:(HMAccessory *)arg1;
- (void)accessory:(HMAccessory *)arg1 didAddSymptomsHandler:(HMSymptomsHandler *)arg2;
- (void)accessory:(HMAccessory *)arg1 didRemoveControlTarget:(HMAccessory *)arg2;
- (void)accessory:(HMAccessory *)arg1 didAddControlTarget:(HMAccessory *)arg2;
- (void)accessoryDidUpdateTargetControlSupport:(HMAccessory *)arg1;
- (void)accessory:(HMAccessory *)arg1 didUpdateConfigurationStateForService:(HMService *)arg2;
- (void)accessory:(HMAccessory *)arg1 didUpdateServiceSubtypeForService:(HMService *)arg2;
- (void)accessory:(HMAccessory *)arg1 didUpdateDefaultNameForService:(HMService *)arg2;
- (void)accessory:(HMAccessory *)arg1 didUpdateConfiguredNameForService:(HMService *)arg2;
- (void)accessoryDidUpdateControllable:(HMAccessory *)arg1;
- (void)accessory:(HMAccessory *)arg1 didUpdateLoggedInAccount:(ACAccount *)arg2;
- (void)accessory:(HMAccessory *)arg1 didUpdateSoftwareVersion:(HMFSoftwareVersion *)arg2;
- (void)accessory:(HMAccessory *)arg1 didUpdatePairingIdentity:(HMFPairingIdentity *)arg2;
- (void)accessory:(HMAccessory *)arg1 didUpdateFirmwareUpdateAvailable:(_Bool)arg2;
- (void)accessory:(HMAccessory *)arg1 didUpdateSettings:(HMAccessorySettings *)arg2;
- (void)accessory:(HMAccessory *)arg1 didUpdateStoreID:(NSString *)arg2;
- (void)accessory:(HMAccessory *)arg1 didUpdateBundleID:(NSString *)arg2;
- (void)accessory:(HMAccessory *)arg1 didUpdateHasAuthorizationDataForCharacteristic:(HMCharacteristic *)arg2;
- (void)accessory:(HMAccessory *)arg1 didUpdateBulletinBoardNotificationServiceGroupForService:(HMService *)arg2;
- (void)accessory:(HMAccessory *)arg1 didUpdateBulletinBoardNotificationForService:(HMService *)arg2;
- (void)accessory:(HMAccessory *)arg1 didUpdateApplicationDataForService:(HMService *)arg2;
- (void)accessoryDidUpdateCalibrationStatus:(HMAccessory *)arg1;
- (void)accessoryDidUpdateAdditionalSetupRequired:(HMAccessory *)arg1;
- (void)accessoryDidUpdateApplicationData:(HMAccessory *)arg1;
@end

