//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSData.h>

@class NSString;

@interface NSData (HMB)
+ (id)hmbDescriptionForEncodedQueryableVariable:(id)arg1;	// IMP=0x00100000000858c3
+ (id)hmbDecodeQueryableParameter:(id)arg1;	// IMP=0x00100000000858ad
+ (id)hmbEncodeQueryableParameter:(id)arg1;	// IMP=0x0010000000085897
+ (id)hmbDataWithSQLite3Column:(struct sqlite3_stmt *)arg1 column:(int)arg2;	// IMP=0x001000000008f935
+ (id)hmbDataWithSQLite3ColumnNoCopy:(struct sqlite3_stmt *)arg1 column:(int)arg2;	// IMP=0x001000000008f89d
@property(readonly, copy) NSString *hmbDescription;
- (id)hmbUncompress;	// IMP=0x0010000000083f4d
- (id)hmbCompress;	// IMP=0x0010000000083c60

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

