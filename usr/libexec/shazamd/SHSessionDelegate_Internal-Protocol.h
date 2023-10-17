//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "SHSessionDelegate-Protocol.h"

@class SHMatcherResponse, SHSession, SHSignature;

@protocol SHSessionDelegate_Internal <SHSessionDelegate>

@optional
- (void)finishedSession:(SHSession *)arg1;
- (void)session:(SHSession *)arg1 didProduceResponse:(SHMatcherResponse *)arg2;
- (_Bool)session:(SHSession *)arg1 shouldAttemptToMatchSignature:(SHSignature *)arg2;
@end

