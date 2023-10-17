//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class NSData;

@protocol ASXSignatureExtracting <NSObject>
- (oneway void)reset;
- (oneway void)getSignature:(void (^)(NSData *))arg1;
- (oneway void)appendAcousticData:(NSData *)arg1 sampleCount:(int)arg2 sampleRate:(int)arg3;
- (oneway void)setSampleRate:(int)arg1;
@end

