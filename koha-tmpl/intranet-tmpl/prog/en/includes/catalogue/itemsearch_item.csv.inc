[%- USE Branches -%]
[%- USE Koha -%]
[%- biblio = item.biblio -%]
[%- biblioitem = item.biblioitem -%]
"[% biblio.title %] [% IF ( Koha.Preference( 'marcflavour' ) == 'UNIMARC' && biblio.author ) %]by [% END %][% biblio.author %]", "[% (biblioitem.publicationyear || biblio.copyrightdate) %]", "[% biblioitem.publishercode %]", "[% biblioitem.collectiontitle %]", "[% item.barcode %]", "[% item.itemcallnumber %]", "[% Branches.GetName(item.homebranch) %]", "[% Branches.GetName(item.holdingbranch) %]", "[% item.location %]", "[% item.stocknumber %]", "[% item.status %]", "[% (item.issues || 0) %]"[% INCLUDE 'empty_line.inc' %]
