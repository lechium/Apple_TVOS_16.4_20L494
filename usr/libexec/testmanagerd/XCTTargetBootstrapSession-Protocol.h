//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol XCTTargetBootstrapSession <NSObject>
@property(readonly) int processIdentifier;
- (void)requestEndpointForBackendPath:(NSString *)arg1 protocolVersion:(unsigned long long)arg2 reply:(void (^)(NSXPCListenerEndpoint *, NSError *))arg3;
- (void)invalidate;
@end
