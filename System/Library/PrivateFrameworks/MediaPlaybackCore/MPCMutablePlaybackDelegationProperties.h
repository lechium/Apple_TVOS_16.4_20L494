//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, NSTimeZone;

__attribute__((visibility("hidden")))
@interface MPCMutablePlaybackDelegationProperties
{
}

@property(copy, nonatomic) NSTimeZone *timeZone; // @dynamic timeZone;
@property(nonatomic) long long systemReleaseType; // @dynamic systemReleaseType;
@property(copy, nonatomic) NSString *requestUserAgent; // @dynamic requestUserAgent;
@property(copy, nonatomic) NSString *deviceName; // @dynamic deviceName;
@property(copy, nonatomic) NSString *deviceGUID; // @dynamic deviceGUID;
@property(nonatomic) unsigned long long storeAccountID; // @dynamic storeAccountID;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000002000bd
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000020008a

@end

