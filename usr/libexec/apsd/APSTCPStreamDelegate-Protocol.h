//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class APSConfiguration, NSData, NSDictionary, NSError, NSString;
@protocol APSTCPStream;

@protocol APSTCPStreamDelegate <NSObject>
- (void)tcpStream:(id <APSTCPStream>)arg1 errorOccured:(NSError *)arg2;
- (void)tcpStreamEndEncountered:(id <APSTCPStream>)arg1 withReason:(unsigned int)arg2;
- (unsigned long long)tcpStream:(id <APSTCPStream>)arg1 dataReceived:(NSData *)arg2 isWakingMessage:(_Bool)arg3;

@optional
- (void)tcpStreamHasConnected:(id <APSTCPStream>)arg1 context:(NSDictionary *)arg2 enabledPackedFormat:(_Bool)arg3 maxEncoderTableSize:(unsigned long long)arg4 maxDecoderTableSize:(unsigned long long)arg5 secureHandshakeEnabled:(_Bool)arg6;
- (_Bool)tcpStreamHasSpaceAvailable:(id <APSTCPStream>)arg1;
- (void)tcpStream:(id <APSTCPStream>)arg1 hasDeterminedServerHostname:(NSString *)arg2;
- (void)tcpStream:(id <APSTCPStream>)arg1 receivedServerBag:(APSConfiguration *)arg2;
@end

