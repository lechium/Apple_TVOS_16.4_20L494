//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSString;

@interface CKDPushToken : NSObject
{
    NSString *_apsEnvironmentString;	// 8 = 0x8
    NSData *_apsToken;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000355c5a
@property(retain, nonatomic) NSData *apsToken; // @synthesize apsToken=_apsToken;
@property(retain, nonatomic) NSString *apsEnvironmentString; // @synthesize apsEnvironmentString=_apsEnvironmentString;
- (unsigned long long)hash;	// IMP=0x0000000000355b97
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000035596b

@end

