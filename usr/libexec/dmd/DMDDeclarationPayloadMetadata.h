//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface DMDDeclarationPayloadMetadata
{
}

+ (id)fetchRequestForDeclarationsPendingDeleteFromOrganizationWithIdentifier:(id)arg1;	// IMP=0x004000000003a83b
+ (id)fetchRequestForFailedDeclarationsFromOrganizationWithIdentifier:(id)arg1;	// IMP=0x001000000003a6db
+ (id)fetchRequestForActiveDeclarationFromOrganizationWithIdentifier:(id)arg1 withIdentifier:(id)arg2 serverHash:(id)arg3;	// IMP=0x001000000003a501
+ (id)fetchRequestForActiveDeclarationsFromOrganizationWithIdentifier:(id)arg1 withIdentifiers:(id)arg2;	// IMP=0x001000000003a39d
+ (id)fetchRequestForActiveDeclarationsFromOrganizationWithIdentifier:(id)arg1;	// IMP=0x001000000003a274
+ (id)fetchRequestForDeclarationsFromOrganizationWithIdentifier:(id)arg1 withIdentifiers:(id)arg2;	// IMP=0x001000000003a1d9
+ (id)fetchRequestForDeclarationsFromOrganizationWithIdentifier:(id)arg1;	// IMP=0x001000000003a1c5
+ (id)fetchRequestForDeclarationsFromOrganizationWithIdentifier:(id)arg1 matchingPredicate:(id)arg2;	// IMP=0x001000000003a094
+ (id)declarationsWithDictionaries:(id)arg1 organizationIdentifier:(id)arg2 context:(id)arg3 error:(id *)arg4;	// IMP=0x0010000000039cea
- (void)setStateDictionary:(id)arg1;	// IMP=0x0020000000039c4e
- (id)descriptiveProperties;	// IMP=0x0010000000039b6d
- (void)applyPayloadDictionary:(id)arg1;	// IMP=0x0010000000039b11
@property(readonly, copy, nonatomic) NSString *uniqueIdentifier;

// Remaining properties
@property(nonatomic) _Bool failed; // @dynamic failed;
@property(copy, nonatomic) NSString *serverHash; // @dynamic serverHash;

@end
