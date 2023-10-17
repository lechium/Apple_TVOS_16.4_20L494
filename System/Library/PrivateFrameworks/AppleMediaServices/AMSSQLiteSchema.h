//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AMSSQLiteConnection;

__attribute__((visibility("hidden")))
@interface AMSSQLiteSchema : NSObject
{
    AMSSQLiteConnection *_connection;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000003133b9
- (void)_setUserVersion:(long long)arg1;	// IMP=0x0000000000313357
- (_Bool)tableExists:(id)arg1;	// IMP=0x00000000003131ed
- (_Bool)migrateToVersion:(long long)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000000313048
@property(readonly) long long currentUserVersion;
- (_Bool)column:(id)arg1 existsInTable:(id)arg2;	// IMP=0x0000000000312d51
- (id)initWithConnection:(id)arg1;	// IMP=0x0000000000312ce6

@end

