//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSString;

@interface IDSAuthenticateUsersResponse : NSObject
{
    NSString *_userID;	// 8 = 0x8
    long long _responseCode;	// 16 = 0x10
    NSData *_cert;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x002000000037ab30
@property(retain, nonatomic) NSData *cert; // @synthesize cert=_cert;
@property(nonatomic) long long responseCode; // @synthesize responseCode=_responseCode;
@property(retain, nonatomic) NSString *userID; // @synthesize userID=_userID;
- (id)description;	// IMP=0x001000000037a9b0

@end

