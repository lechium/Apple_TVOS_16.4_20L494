//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CopresenceCore/NSObject-Protocol.h>

@class NSData;

@protocol CPLinkProtocol <NSObject>
- (void)close;
- (_Bool)isReady;

@optional
- (void)resetTrafficPriority:(unsigned int)arg1;
- (void)sendData:(NSData *)arg1 ofType:(unsigned char)arg2 completion:(void (^)(NSError *))arg3;
- (void)sendUnicastData:(NSData *)arg1 ofType:(unsigned char)arg2 completion:(void (^)(NSError *))arg3;
- (void)broadcastUnreliableData:(NSData *)arg1 completion:(void (^)(NSError *))arg2;
@end

