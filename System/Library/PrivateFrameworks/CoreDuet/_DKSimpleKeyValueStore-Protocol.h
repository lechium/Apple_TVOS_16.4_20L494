//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSObject, NSString;
@protocol NSSecureCoding;

@protocol _DKSimpleKeyValueStore
- (void)removeObjectForKey:(NSString *)arg1;
- (void)setObject:(NSObject<NSSecureCoding> *)arg1 forKey:(NSString *)arg2;
- (NSObject *)objectForKey:(NSString *)arg1;
@end

