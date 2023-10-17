//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CTCellularPlanProvisioningOnDeviceActivationRequest, CTCellularPlanProvisioningRequest, CTDeviceIdentifier, CTPlan, CTPlanList, CTPlanSetupDetails, CTRemotePlanIdentifier, CTRemotePlanIdentifierList, CTSimSetupUsage, CTXPCServiceSubscriptionContext, CUMessageSession, NSArray, NSData, NSDictionary, NSString;

@protocol CTXPCServiceCellularPlanManagerInterface
- (void)resetProximityTransportExtension:(void (^)(NSError *))arg1;
- (void)validateProximityTransfer:(unsigned long long)arg1 pin:(NSString *)arg2 completion:(void (^)(NSError *))arg3;
- (void)invalidateProximityTransfer:(unsigned long long)arg1 force:(_Bool)arg2 completion:(void (^)(NSError *))arg3;
- (void)activateProximityTransfer:(unsigned long long)arg1 completion:(void (^)(NSError *))arg2;
- (void)getProximityTransportSession:(unsigned long long)arg1 remoteDeviceInfo:(NSDictionary *)arg2 completion:(void (^)(CUMessageSession *, NSError *))arg3;
- (void)getRemotePlanManageAccountInfoFor:(NSString *)arg1 completion:(void (^)(NSURL *, NSDictionary *, NSError *))arg2;
- (void)remotePlanSignupInfoFor:(CTXPCServiceSubscriptionContext *)arg1 userConsent:(long long)arg2 completion:(void (^)(NSURL *, NSDictionary *, NSError *))arg3;
- (void)hiddenTransferPlans:(void (^)(CTDisplayPlanList *, NSError *))arg1;
- (void)unhideTransferPlan:(CTPlan *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)hideTransferCellularPlan:(CTPlan *)arg1 fromDevice:(CTDeviceIdentifier *)arg2 completion:(void (^)(_Bool, NSError *))arg3;
- (void)hideTransferPlan:(CTRemotePlanIdentifier *)arg1 fromDevice:(CTDeviceIdentifier *)arg2 completion:(void (^)(_Bool, NSError *))arg3;
- (void)transferRemotePlan:(CTRemotePlanIdentifier *)arg1 fromDevice:(CTDeviceIdentifier *)arg2 completion:(void (^)(_Bool, NSError *))arg3;
- (void)getRemoteDeviceForTransferWithEID:(NSString *)arg1 completion:(void (^)(CTRemoteDevice *, NSError *))arg2;
- (void)getRemoteDevicesForTransferWithCompletion:(void (^)(CTRemoteDeviceList *, NSError *))arg1;
- (void)updateSecureIntentData:(NSData *)arg1 completion:(void (^)(NSError *))arg2;
- (void)endPlanTransferForEndPoint:(unsigned long long)arg1 completion:(void (^)(NSError *))arg2;
- (void)isAnyPlanOfTransferCapability:(unsigned long long)arg1 availableForThisDeviceWithCompletion:(void (^)(_Bool, NSError *))arg2;
- (void)bootstrapPlanTransferForEndpoint:(unsigned long long)arg1 usingMessageSession:(CUMessageSession *)arg2 completion:(void (^)(NSError *))arg3;
- (void)isAnyPlanTransferableFromThisDeviceWithCompletion:(void (^)(_Bool, NSError *))arg1;
- (void)submitPlanSetupDetails:(CTPlanSetupDetails *)arg1 completion:(void (^)(NSError *))arg2;
- (void)setUpeSIMLaunched:(void (^)(NSError *))arg1;
- (void)registerSetUpeSIMLaunchedEvent:(void (^)(NSError *))arg1;
- (void)needToLaunchSetUpeSIMWithCompletion:(void (^)(_Bool))arg1;
- (void)submitCarrierSetupUserCancelEvent:(void (^)(NSError *))arg1;
- (void)disableRejectedIccid:(void (^)(NSError *))arg1;
- (void)encryptDataWithCarrierIdentifiers:(NSString *)arg1 mnc:(NSString *)arg2 gid1:(NSString *)arg3 gid2:(NSString *)arg4 data:(NSString *)arg5 completion:(void (^)(NSString *, NSError *))arg6;
- (void)encryptDataForPlan:(CTPlan *)arg1 data:(NSString *)arg2 completion:(void (^)(NSString *, NSData *, NSError *))arg3;
- (void)websheetInfoForIccid:(NSString *)arg1 completion:(void (^)(NSString *, NSDictionary *, NSString *, NSError *))arg2;
- (void)websheetInfoForPlan:(CTPlan *)arg1 completion:(void (^)(NSString *, NSDictionary *, NSString *, NSError *))arg2;
- (void)getCarrierSetupWithCompletion:(void (^)(CTDisplayPlanList *, NSError *))arg1;
- (void)submitSimSetupUsage:(CTSimSetupUsage *)arg1 completion:(void (^)(NSError *))arg2;
- (void)getDeviceInfo:(void (^)(NSDictionary *, NSError *))arg1;
- (void)purchaseAddOnPlan:(CTPlan *)arg1 completion:(void (^)(NSString *, NSDictionary *, NSError *))arg2;
- (void)getRemoteDevices:(void (^)(CTRemoteDeviceList *, NSError *))arg1;
- (void)installPendingPlanList:(CTPlanList *)arg1 completion:(void (^)(NSError *))arg2;
- (void)installPendingPlan:(CTPlan *)arg1 completion:(void (^)(NSError *))arg2;
- (void)plansPendingInstallWithCompletion:(void (^)(CTDisplayPlanList *, NSError *))arg1;
- (void)deleteZone:(NSString *)arg1 completion:(void (^)(_Bool))arg2;
- (void)deleteTransferPlansForImei:(NSString *)arg1 completion:(void (^)(_Bool))arg2;
- (void)getTransferType:(CTPlan *)arg1 remoteEid:(NSString *)arg2 completion:(void (^)(unsigned long long))arg3;
- (void)getPlanTransferCredentials:(NSString *)arg1 completion:(void (^)(NSString *, NSError *))arg2;
- (void)convertPhysicalToeSIMWithCompletionHandler:(void (^)(NSError *))arg1;
- (void)cancelCellularPlanTransfer:(CTPlan *)arg1 fromDevice:(CTDeviceIdentifier *)arg2 keepCache:(_Bool)arg3 completionHandler:(void (^)(NSError *))arg4;
- (void)transferCellularPlans:(CTPlanList *)arg1 fromDevice:(CTDeviceIdentifier *)arg2 completionHandler:(void (^)(_Bool, NSString *, NSDictionary *, NSError *))arg3;
- (void)transferPlans:(CTRemotePlanIdentifierList *)arg1 fromDevice:(CTDeviceIdentifier *)arg2 completionHandler:(void (^)(_Bool, NSString *, NSDictionary *, NSError *))arg3;
- (void)transferCellularPlan:(CTPlan *)arg1 fromDevice:(CTDeviceIdentifier *)arg2 completionHandler:(void (^)(_Bool, NSString *, NSDictionary *, NSError *))arg3;
- (void)transferPlan:(CTRemotePlanIdentifier *)arg1 fromDevice:(CTDeviceIdentifier *)arg2 completionHandler:(void (^)(_Bool, NSString *, NSDictionary *, NSError *))arg3;
- (void)getTransferPlansWithCompletion:(void (^)(CTRemoteDeviceList *, _Bool, NSError *))arg1;
- (void)getTransferPlanListWithCompletion:(void (^)(CTRemoteDeviceList *, NSError *))arg1;
- (void)getCameraScanInfoForCardData:(NSString *)arg1 completionHandler:(void (^)(CTCellularPlanManagerCameraScanAction *, NSError *))arg2;
- (void)addPlanWith:(CTCellularPlanProvisioningOnDeviceActivationRequest *)arg1 completionHandler:(void (^)(unsigned long long, NSError *))arg2;
- (void)addPlanWith:(CTCellularPlanProvisioningRequest *)arg1 appName:(NSString *)arg2 appType:(unsigned long long)arg3 completionHandler:(void (^)(unsigned long long, NSError *))arg4;
- (void)usingBootstrapDataServiceWithCompletion:(void (^)(_Bool))arg1;
- (void)supportsPlanProvisioning:(CTXPCServiceSubscriptionContext *)arg1 carrierDescriptors:(NSArray *)arg2 smdpUrl:(NSString *)arg3 iccidPrefix:(NSString *)arg4 completionHandler:(void (^)(_Bool))arg5;
- (void)supportsHydraWithCompletion:(void (^)(_Bool))arg1;
@end

