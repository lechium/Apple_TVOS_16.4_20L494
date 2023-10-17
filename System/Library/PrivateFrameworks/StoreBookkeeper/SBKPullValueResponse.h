//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "SBKResponse.h"

@class NSData, NSString;

__attribute__((visibility("hidden")))
@interface SBKPullValueResponse : SBKResponse
{
    NSString *_itemKey;	// 8 = 0x8
    NSString *_itemVersion;	// 16 = 0x10
    NSData *_itemValuePayload;	// 24 = 0x18
    NSString *_domainVersion;	// 32 = 0x20
}

+ (id)responseWithResponse:(id)arg1 transaction:(id)arg2;	// IMP=0x0060000000023096
- (void).cxx_destruct;	// IMP=0x0000000000023247
@property(readonly, nonatomic) NSString *domainVersion; // @synthesize domainVersion=_domainVersion;
@property(readonly, nonatomic) NSData *itemValuePayload; // @synthesize itemValuePayload=_itemValuePayload;
@property(readonly, nonatomic) NSString *itemVersion; // @synthesize itemVersion=_itemVersion;
@property(readonly, nonatomic) NSString *itemKey; // @synthesize itemKey=_itemKey;
- (void)deserializeResponseBodyWithTransaction:(id)arg1;	// IMP=0x000000000002310a

@end

