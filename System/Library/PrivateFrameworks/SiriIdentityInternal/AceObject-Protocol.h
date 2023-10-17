//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SiriIdentityInternal/NSCopying-Protocol.h>
#import <SiriIdentityInternal/NSMutableCopying-Protocol.h>
#import <SiriIdentityInternal/NSObject-Protocol.h>
#import <SiriIdentityInternal/NSSecureCoding-Protocol.h>

@class NSDictionary, NSMutableDictionary, NSString;
@protocol AceContext;

@protocol AceObject <NSObject, NSCopying, NSMutableCopying, NSSecureCoding>
- (NSString *)groupIdentifier;
- (NSString *)encodedClassName;
- (NSMutableDictionary *)properties;
- (NSMutableDictionary *)dictionary;
- (id)initWithDictionary:(NSDictionary *)arg1 context:(id <AceContext>)arg2;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)init;
@end

