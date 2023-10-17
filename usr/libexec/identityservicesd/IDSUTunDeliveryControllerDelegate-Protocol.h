//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class IDSProtobuf, IDSUTunDeliveryController, NSArray, NSData, NSDictionary, NSNumber, NSString;

@protocol IDSUTunDeliveryControllerDelegate <NSObject>

@optional
- (NSDictionary *)deliveryControllerQueuedIncomingMessageDictionary:(IDSUTunDeliveryController *)arg1;
- (void)deliveryController:(IDSUTunDeliveryController *)arg1 device:(NSString *)arg2 supportsDirectMessaging:(_Bool)arg3 isObliterating:(_Bool)arg4;
- (void)deliveryController:(IDSUTunDeliveryController *)arg1 foundNearbyIPsecCapableDeviceWithUniqueID:(NSString *)arg2;
- (void)deliveryControllerHasSpaceforUrgentMessages:(IDSUTunDeliveryController *)arg1 dataProtectionClass:(unsigned int)arg2 ofTypes:(NSArray *)arg3;
- (void)deliveryControllerHasSpaceforNonUrgentMessages:(IDSUTunDeliveryController *)arg1 priority:(long long)arg2 dataProtectionClass:(unsigned int)arg3 ofTypes:(NSArray *)arg4;
- (void)deliveryControllerHasSpaceforNonUrgentMessages:(IDSUTunDeliveryController *)arg1 priority:(long long)arg2 dataProtectionClass:(unsigned int)arg3;
- (void)deliveryController:(IDSUTunDeliveryController *)arg1 receivedAppLevelAckWithTopic:(NSString *)arg2 deviceID:(NSString *)arg3 btUUID:(NSString *)arg4 messageID:(NSNumber *)arg5 peerResponseIdentifier:(NSString *)arg6 priority:(long long)arg7 connectionType:(long long)arg8;
- (void)deliveryController:(IDSUTunDeliveryController *)arg1 messageReceived:(NSData *)arg2 topic:(NSString *)arg3 command:(NSNumber *)arg4 deviceID:(NSString *)arg5 btUUID:(NSString *)arg6 messageID:(NSNumber *)arg7 wantsAppAck:(_Bool)arg8 expectsPeerResponse:(_Bool)arg9 peerResponseIdentifier:(NSString *)arg10 messageUUID:(NSString *)arg11 priority:(long long)arg12 isCompressed:(_Bool)arg13 connectionType:(long long)arg14 didWakeHint:(_Bool)arg15;
- (void)deliveryController:(IDSUTunDeliveryController *)arg1 dataReceived:(NSData *)arg2 topic:(NSString *)arg3 command:(NSNumber *)arg4 deviceID:(NSString *)arg5 btUUID:(NSString *)arg6 messageID:(NSNumber *)arg7 wantsAppAck:(_Bool)arg8 expectsPeerResponse:(_Bool)arg9 peerResponseIdentifier:(NSString *)arg10 messageUUID:(NSString *)arg11 priority:(long long)arg12 isCompressed:(_Bool)arg13 connectionType:(long long)arg14 didWakeHint:(_Bool)arg15;
- (void)deliveryController:(IDSUTunDeliveryController *)arg1 protobufReceived:(IDSProtobuf *)arg2 topic:(NSString *)arg3 command:(NSNumber *)arg4 deviceID:(NSString *)arg5 btUUID:(NSString *)arg6 messageID:(NSNumber *)arg7 wantsAppAck:(_Bool)arg8 expectsPeerResponse:(_Bool)arg9 peerResponseIdentifier:(NSString *)arg10 messageUUID:(NSString *)arg11 priority:(long long)arg12 isCompressed:(_Bool)arg13 connectionType:(long long)arg14 didWakeHint:(_Bool)arg15;
@end

