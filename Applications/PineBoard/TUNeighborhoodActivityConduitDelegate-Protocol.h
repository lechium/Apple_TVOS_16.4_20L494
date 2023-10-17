//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class NSUUID, TUConversation, TUNearbyDeviceHandle, TUNeighborhoodActivityConduit, TUNeighborhoodHandoffContext;

@protocol TUNeighborhoodActivityConduitDelegate <NSObject>
- (void)neighborhoodActivityConduitUpdatedKnownContacts:(TUNeighborhoodActivityConduit *)arg1;
- (void)neighborhoodActivityConduitNearbyConversationsChanged:(TUNeighborhoodActivityConduit *)arg1;

@optional
- (void)neighborhoodActivityConduit:(TUNeighborhoodActivityConduit *)arg1 leftSplitSession:(TUConversation *)arg2;
- (void)neighborhoodActivityConduit:(TUNeighborhoodActivityConduit *)arg1 joinedSplitSession:(TUConversation *)arg2 fromDevice:(TUNearbyDeviceHandle *)arg3;
- (void)neighborhoodActivityConduit:(TUNeighborhoodActivityConduit *)arg1 joinedSplitSessionWithID:(NSUUID *)arg2 fromDevice:(TUNearbyDeviceHandle *)arg3;
- (void)neighborhoodActivityConduit:(TUNeighborhoodActivityConduit *)arg1 leftSplitSessionWithID:(NSUUID *)arg2;
- (void)neighborhoodActivityConduit:(TUNeighborhoodActivityConduit *)arg1 joinedSplitSessionWithID:(NSUUID *)arg2 fromDevice:(TUNearbyDeviceHandle *)arg3 handoffContext:(TUNeighborhoodHandoffContext *)arg4;
@end

