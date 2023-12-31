//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSUserDefaults;
@protocol OS_os_log;

@interface PCSMetrics : NSObject
{
    NSObject<OS_os_log> *_log;	// 8 = 0x8
    NSUserDefaults *_settings;	// 16 = 0x10
    struct sqlite3 *_db;	// 24 = 0x18
    struct sqlite3_stmt *_addKeyStmt;	// 32 = 0x20
    struct sqlite3_stmt *_markKeyStmt;	// 40 = 0x28
    struct sqlite3_stmt *_getKeyStmt;	// 48 = 0x30
}

+ (id)metrics;	// IMP=0x004000000000c964
- (void).cxx_destruct;	// IMP=0x002000000000e44e
@property struct sqlite3_stmt *getKeyStmt; // @synthesize getKeyStmt=_getKeyStmt;
@property struct sqlite3_stmt *markKeyStmt; // @synthesize markKeyStmt=_markKeyStmt;
@property struct sqlite3_stmt *addKeyStmt; // @synthesize addKeyStmt=_addKeyStmt;
@property struct sqlite3 *db; // @synthesize db=_db;
@property(retain) NSUserDefaults *settings; // @synthesize settings=_settings;
@property(retain) NSObject<OS_os_log> *log; // @synthesize log=_log;
- (unsigned int)getKeyInfoWithDSID:(id)arg1 service:(unsigned int)arg2 publicKey:(id)arg3;	// IMP=0x001000000000e234
- (_Bool)markKeyNegativeWithDSID:(id)arg1 service:(unsigned int)arg2;	// IMP=0x001000000000e11d
- (_Bool)addKeyWithDSID:(id)arg1 service:(unsigned int)arg2 publicKey:(id)arg3;	// IMP=0x001000000000dfb2
- (_Bool)setupDatabase;	// IMP=0x001000000000dca4
- (id)databaseURL;	// IMP=0x001000000000db31
- (CDUnknownBlockType)markNegativeCallback;	// IMP=0x001000000000dac8
- (CDUnknownBlockType)keyRegistryCallback;	// IMP=0x001000000000d92b
- (void)storeEventTimestamp:(unsigned long long)arg1;	// IMP=0x001000000000d8a0
- (int)updateCurrentWState:(struct _PCSIdentitySetData *)arg1;	// IMP=0x001000000000d70c
- (void)addIdentityInfoToHealthSummary:(id)arg1 dsid:(id)arg2 wState:(int)arg3;	// IMP=0x001000000000cd2d
- (void)addMetricsToHealthSummary:(id)arg1 withIdentitySet:(struct _PCSIdentitySetData *)arg2;	// IMP=0x001000000000c9b9
- (void)dealloc;	// IMP=0x001000000000c8ca
- (id)init;	// IMP=0x001000000000c807

@end

