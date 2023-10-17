//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <IMCore/NSObject-Protocol.h>

@class IMDaemonListener, IMDaemonQueryController, NSString;
@protocol IMDaemonProtocol;

@protocol IMDaemonControlling <NSObject>
@property(readonly, nonatomic) unsigned int capabilities;
@property(readonly, nonatomic) IMDaemonListener *listener;
@property(readonly, nonatomic) IMDaemonQueryController *queryController;
@property(readonly, nonatomic) id <IMDaemonProtocol> replyingRemoteDaemon;
@property(readonly, nonatomic) id <IMDaemonProtocol> synchronousReplyingRemoteDaemon;
@property(readonly, nonatomic) id <IMDaemonProtocol> synchronousRemoteDaemon;
@property(readonly, nonatomic) id <IMDaemonProtocol> remoteDaemon;
@property(readonly, nonatomic, getter=isConnected) _Bool connected;
- (_Bool)setCapabilities:(unsigned int)arg1 forListenerID:(NSString *)arg2;
- (unsigned int)capabilitiesForListenerID:(NSString *)arg1;
- (_Bool)removeListenerID:(NSString *)arg1;
- (_Bool)hasListenerForID:(NSString *)arg1;
- (_Bool)addListenerID:(NSString *)arg1 capabilities:(unsigned int)arg2;
@end

