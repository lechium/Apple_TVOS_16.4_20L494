//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, SAMLStatusCode;

__attribute__((visibility("hidden")))
@interface SAMLStatus
{
}

+ (id)createElement:(id *)arg1;	// IMP=0x006000000000eb97
- (id)status;	// IMP=0x000000000000ece6
@property(readonly, nonatomic) NSString *statusDetail;
@property(readonly, nonatomic) NSString *statusMessage;
@property(readonly, nonatomic) SAMLStatusCode *statusCode;

@end

