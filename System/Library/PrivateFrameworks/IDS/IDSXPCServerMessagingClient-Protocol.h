//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <IDS/NSObject-Protocol.h>

@class IDSServerMessagingIncomingContext, NSData, NSString;

@protocol IDSXPCServerMessagingClient <NSObject>
- (void)handleReceivedIncomingMessageData:(NSData *)arg1 identifier:(NSString *)arg2 context:(IDSServerMessagingIncomingContext *)arg3;
@end

