//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSData, NSString, TRIPBMessage;

@protocol TRIPBMessageSignatureProtocol

@optional
+ (id)getClassValue;
- (void)setArray:(NSArray *)arg1;
- (unsigned long long)getArrayCount;
- (id)getArray;
- (int)getEnumAtIndex:(unsigned long long)arg1;
- (void)setEnum:(int)arg1;
- (int)getEnum;
- (TRIPBMessage *)getGroupAtIndex:(unsigned long long)arg1;
- (void)setGroup:(TRIPBMessage *)arg1;
- (TRIPBMessage *)getGroup;
- (TRIPBMessage *)getMessageAtIndex:(unsigned long long)arg1;
- (void)setMessage:(TRIPBMessage *)arg1;
- (TRIPBMessage *)getMessage;
- (NSString *)getStringAtIndex:(unsigned long long)arg1;
- (void)setString:(NSString *)arg1;
- (NSString *)getString;
- (NSData *)getBytesAtIndex:(unsigned long long)arg1;
- (void)setBytes:(NSData *)arg1;
- (NSData *)getBytes;
- (unsigned long long)getUInt64AtIndex:(unsigned long long)arg1;
- (void)setUInt64:(unsigned long long)arg1;
- (unsigned long long)getUInt64;
- (unsigned int)getUInt32AtIndex:(unsigned long long)arg1;
- (void)setUInt32:(unsigned int)arg1;
- (unsigned int)getUInt32;
- (long long)getSInt64AtIndex:(unsigned long long)arg1;
- (void)setSInt64:(long long)arg1;
- (long long)getSInt64;
- (int)getSInt32AtIndex:(unsigned long long)arg1;
- (void)setSInt32:(int)arg1;
- (int)getSInt32;
- (long long)getInt64AtIndex:(unsigned long long)arg1;
- (void)setInt64:(long long)arg1;
- (long long)getInt64;
- (int)getInt32AtIndex:(unsigned long long)arg1;
- (void)setInt32:(int)arg1;
- (int)getInt32;
- (double)getDoubleAtIndex:(unsigned long long)arg1;
- (void)setDouble:(double)arg1;
- (double)getDouble;
- (long long)getSFixed64AtIndex:(unsigned long long)arg1;
- (void)setSFixed64:(long long)arg1;
- (long long)getSFixed64;
- (unsigned long long)getFixed64AtIndex:(unsigned long long)arg1;
- (void)setFixed64:(unsigned long long)arg1;
- (unsigned long long)getFixed64;
- (float)getFloatAtIndex:(unsigned long long)arg1;
- (void)setFloat:(float)arg1;
- (float)getFloat;
- (int)getSFixed32AtIndex:(unsigned long long)arg1;
- (void)setSFixed32:(int)arg1;
- (int)getSFixed32;
- (unsigned int)getFixed32AtIndex:(unsigned long long)arg1;
- (void)setFixed32:(unsigned int)arg1;
- (unsigned int)getFixed32;
- (_Bool)getBoolAtIndex:(unsigned long long)arg1;
- (void)setBool:(_Bool)arg1;
- (_Bool)getBool;
@end

