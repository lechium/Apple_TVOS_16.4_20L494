//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@protocol ICDJaliscoSupportedMediaKindsHandler;

@interface JaliscoMediaUpdateOperation
{
    id <ICDJaliscoSupportedMediaKindsHandler> _supportedMediaKindsHandler;	// 8 = 0x8
}

+ (id)oversizeLogCategory;	// IMP=0x004000000010f18e
+ (id)logCategory;	// IMP=0x001000000010f16e
- (void).cxx_destruct;	// IMP=0x002000000010f15b
- (void)handleSuccess:(long long)arg1;	// IMP=0x001000000010f007
- (id)newImporter;	// IMP=0x001000000010ef98
- (_Bool)preflightImport;	// IMP=0x001000000010ed95
- (long long)localDatabaseRevision;	// IMP=0x001000000010ed51
- (id)queryFilterPercentEscaped;	// IMP=0x001000000010ec96
- (id)initWithConfiguration:(id)arg1 reason:(long long)arg2 supportedMediaKindsHandler:(id)arg3 clientIdentity:(id)arg4;	// IMP=0x001000000010ec0c

@end

