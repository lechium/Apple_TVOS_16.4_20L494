//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface ICSDKAddToLibraryRequest
{
}

+ (id)requestWithDatabaseID:(unsigned int)arg1 databaseRevision:(unsigned int)arg2 opaqueID:(id)arg3 bundleID:(id)arg4;	// IMP=0x004000000011d22d
- (id)_bodyDataForDatabaseRevision:(unsigned int)arg1 opaqueID:(id)arg2;	// IMP=0x004000000011cc86
- (id)canonicalResponseForResponse:(id)arg1;	// IMP=0x001000000011cb07
- (double)timeoutInterval;	// IMP=0x001000000011caf9
- (id)initWithAction:(id)arg1 databaseID:(unsigned int)arg2 databaseRevision:(unsigned int)arg3 opaqueID:(id)arg4 bundleID:(id)arg5;	// IMP=0x001000000011ca13

@end

