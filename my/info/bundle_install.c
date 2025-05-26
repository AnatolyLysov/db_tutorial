gem install nokogiri -v "< 1.15.1" && bundle install

< 1.15.1: Replace with the latest nokogiri version compatible with Ruby 3.3.4 if needed.  

//////////////////////////////////
@AnatolyLysov ➜ /workspaces/db_tutorial (master) $ gem install nokogiri -v "< 1.15.1" && bundle install
Fetching nokogiri-1.15.0.gem
Fetching mini_portile2-2.8.9.gem
Successfully installed mini_portile2-2.8.9
Building native extensions. This could take a while...
ERROR:  Error installing nokogiri:
        ERROR: Failed to build gem native extension.

    current directory: /usr/local/rvm/gems/ruby-3.3.4/gems/nokogiri-1.15.0/ext/nokogiri
/usr/local/rvm/rubies/ruby-3.3.4/bin/ruby extconf.rb
checking for whether -std=c99 is accepted as CFLAGS... no
checking for whether -Wno-declaration-after-statement is accepted as CFLAGS... no
checking for whether -O2 is accepted as CFLAGS... no
checking for whether -g is accepted as CFLAGS... no
checking for whether -Winline is accepted as CFLAGS... no
checking for whether -Wmissing-noreturn is accepted as CFLAGS... no
checking for whether -Wconversion -Wno-sign-conversion is accepted as CFLAGS... no
Building nokogiri using packaged libraries.
Static linking is enabled.
Cross build is disabled.
Using mini_portile version 2.8.9
checking for iconv... yes
---------- IMPORTANT NOTICE ----------
Building Nokogiri with a packaged version of libxml2-2.11.3.
Configuration options: --host\=x86_64-pc-linux --enable-static --disable-shared --libdir\=/usr/local/rvm/gems/ruby-3.3.4/gems/nokogiri-1.15.0/ports/x86_64-linux/libxml2/2.11.3/lib --with-iconv\=yes --disable-dependency-tracking --without-python --without-readline --with-c14n --with-debug --with-threads --disable-shared --enable-static CPPFLAGS\= CFLAGS\=-O2\ -U_FORTIFY_SOURCE\ -g\ -fPIC
The following patches are being applied:
  - 0001-Remove-script-macro-support.patch
  - 0002-Update-entities-to-remove-handling-of-ssi.patch
  - 0003-libxml2.la-is-in-top_builddir.patch
  - 0009-allow-wildcard-namespaces.patch
  - 0010-update-config.guess-and-config.sub-for-libxml2.patch
  - 0011-rip-out-libxml2-s-libc_single_threaded-support.patch

The Nokogiri maintainers intend to provide timely security updates, but if
this is a concern for you and want to use your OS/distro system library
instead, then abort this installation process and install nokogiri as
instructed at:

  https://nokogiri.org/tutorials/installing_nokogiri.html#installing-using-standard-system-libraries

Note, however, that nokogiri cannot guarantee compatibility with every
version of libxml2 that may be provided by OS/package vendors.

Extracting libxml2-2.11.3.tar.xz into tmp/x86_64-pc-linux/ports/libxml2/2.11.3... OK
Running git apply with /usr/local/rvm/gems/ruby-3.3.4/gems/nokogiri-1.15.0/patches/libxml2/0001-Remove-script-macro-support.patch... OK
Running git apply with /usr/local/rvm/gems/ruby-3.3.4/gems/nokogiri-1.15.0/patches/libxml2/0002-Update-entities-to-remove-handling-of-ssi.patch... OK
Running git apply with /usr/local/rvm/gems/ruby-3.3.4/gems/nokogiri-1.15.0/patches/libxml2/0003-libxml2.la-is-in-top_builddir.patch... OK
Running git apply with /usr/local/rvm/gems/ruby-3.3.4/gems/nokogiri-1.15.0/patches/libxml2/0009-allow-wildcard-namespaces.patch... OK
Running git apply with /usr/local/rvm/gems/ruby-3.3.4/gems/nokogiri-1.15.0/patches/libxml2/0010-update-config.guess-and-config.sub-for-libxml2.patch... OK
Running git apply with /usr/local/rvm/gems/ruby-3.3.4/gems/nokogiri-1.15.0/patches/libxml2/0011-rip-out-libxml2-s-libc_single_threaded-support.patch... OK
Running 'configure' for libxml2 2.11.3... OK
Running 'compile' for libxml2 2.11.3... OK
Running 'install' for libxml2 2.11.3... OK
Activating libxml2 2.11.3 (from /usr/local/rvm/gems/ruby-3.3.4/gems/nokogiri-1.15.0/ports/x86_64-linux/libxml2/2.11.3)...
Using mini_portile version 2.8.9
---------- IMPORTANT NOTICE ----------
Building Nokogiri with a packaged version of libxslt-1.1.38.
Configuration options: --host\=x86_64-pc-linux --enable-static --disable-shared --libdir\=/usr/local/rvm/gems/ruby-3.3.4/gems/nokogiri-1.15.0/ports/x86_64-linux/libxslt/1.1.38/lib --disable-dependency-tracking --without-python --without-crypto --with-debug --with-libxml-prefix\=/usr/local/rvm/gems/ruby-3.3.4/gems/nokogiri-1.15.0/ports/x86_64-linux/libxml2/2.11.3 --disable-shared --enable-static CFLAGS\=-O2\ -U_FORTIFY_SOURCE\ -g\ -fPIC
The following patches are being applied:
  - 0001-update-config.guess-and-config.sub-for-libxslt.patch

The Nokogiri maintainers intend to provide timely security updates, but if
this is a concern for you and want to use your OS/distro system library
instead, then abort this installation process and install nokogiri as
instructed at:

  https://nokogiri.org/tutorials/installing_nokogiri.html#installing-using-standard-system-libraries

Extracting libxslt-1.1.38.tar.xz into tmp/x86_64-pc-linux/ports/libxslt/1.1.38... OK
Running git apply with /usr/local/rvm/gems/ruby-3.3.4/gems/nokogiri-1.15.0/patches/libxslt/0001-update-config.guess-and-config.sub-for-libxslt.patch... OK
Running 'configure' for libxslt 1.1.38... OK
Running 'compile' for libxslt 1.1.38... OK
Running 'install' for libxslt 1.1.38... OK
Activating libxslt 1.1.38 (from /usr/local/rvm/gems/ruby-3.3.4/gems/nokogiri-1.15.0/ports/x86_64-linux/libxslt/1.1.38)...
checking for whether -DNOKOGIRI_PACKAGED_LIBRARIES is accepted as CPPFLAGS... no
xml2-config cflags: -I/usr/local/rvm/gems/ruby-3.3.4/gems/nokogiri-1.15.0/ports/x86_64-linux/libxml2/2.11.3/include/libxml2
checking for whether -DNOKOGIRI_LIBXML2_PATCHES="\"0001-Remove-script-macro-support.patch 0002-Update-entities-to-remove-handling-of-ssi.patch 0003-libxml2.la-is-in-top_builddir.patch 0009-allow-wildcard-namespaces.patch 0010-update-config.guess-and-config.sub-for-libxml2.patch 0011-rip-out-libxml2-s-libc_single_threaded-support.patch\"" is accepted as CPPFLAGS... no
checking for -llzma... yes
xslt-config cflags: -I/usr/local/rvm/gems/ruby-3.3.4/gems/nokogiri-1.15.0/ports/x86_64-linux/libxml2/2.11.3/include/libxml2 -I/usr/local/rvm/gems/ruby-3.3.4/gems/nokogiri-1.15.0/ports/x86_64-linux/libxslt/1.1.38/include
checking for whether -DNOKOGIRI_LIBXSLT_PATCHES="\"0001-update-config.guess-and-config.sub-for-libxslt.patch\"" is accepted as CPPFLAGS... no
checking for xmlParseDoc() in libxml/parser.h... yes
checking for xsltParseStylesheetDoc() in libxslt/xslt.h... yes
checking for exsltFuncRegister() in libexslt/exslt.h... yes
Using mini_portile version 2.8.9
---------- IMPORTANT NOTICE ----------
Building Nokogiri with a packaged version of libgumbo-1.0.0-nokogiri.
Configuration options: --disable-shared --enable-static CFLAGS\=-fPIC
Copying gumbo-parser files into tmp/x86_64-pc-linux/ports/libgumbo/1.0.0-nokogiri/gumbo-parser...
Running 'compile' for libgumbo 1.0.0-nokogiri... OK
Activating libgumbo 1.0.0-nokogiri (from ports/x86_64-linux/libgumbo/1.0.0-nokogiri)...
checking for whether -I/usr/local/rvm/gems/ruby-3.3.4/gems/nokogiri-1.15.0/ext/nokogiri/ports/x86_64-linux/libgumbo/1.0.0-nokogiri/include is accepted as CPPFLAGS... no
checking for gumbo_parse_with_options() in nokogiri_gumbo.h... yes
checking for xmlHasFeature()... yes
checking for xmlFirstElementChild()... yes
checking for xmlRelaxNGSetParserStructuredErrors()... yes
checking for xmlRelaxNGSetValidStructuredErrors()... yes
checking for xmlSchemaSetValidStructuredErrors()... yes
checking for xmlSchemaSetParserStructuredErrors()... yes
checking for rb_gc_location()... yes
checking for rb_category_warning()... yes
checking for whether -DNOKOGIRI_OTHER_LIBRARY_VERSIONS="\"libgumbo:1.0.0-nokogiri\"" is accepted as CPPFLAGS... no
creating Makefile

current directory: /usr/local/rvm/gems/ruby-3.3.4/gems/nokogiri-1.15.0/ext/nokogiri
make DESTDIR\= sitearchdir\=./.gem.20250526-11279-m7u90b sitelibdir\=./.gem.20250526-11279-m7u90b clean

current directory: /usr/local/rvm/gems/ruby-3.3.4/gems/nokogiri-1.15.0/ext/nokogiri
make DESTDIR\= sitearchdir\=./.gem.20250526-11279-m7u90b sitelibdir\=./.gem.20250526-11279-m7u90b
compiling gumbo.c
warning: unknown warning option '-Wno-cast-function-type'; did you mean '-Wno-bad-function-cast'? [-Wunknown-warning-option]
gumbo.c:32:10: fatal error: 'nokogiri_gumbo.h' file not found
#include "nokogiri_gumbo.h"
         ^~~~~~~~~~~~~~~~~~
1 warning and 1 error generated.
make: *** [Makefile:472: gumbo.o] Error 1

make failed, exit code 2

Gem files will remain installed in /usr/local/rvm/gems/ruby-3.3.4/gems/nokogiri-1.15.0 for inspection.
Results logged to /usr/local/rvm/gems/ruby-3.3.4/extensions/x86_64-linux/3.3.0/nokogiri-1.15.0/gem_make.out

A new release of RubyGems is available: 3.5.11 → 3.6.9!
Run `gem update --system 3.6.9` to update your installation.
// If you encounter issues with the above command, consider updating RubyGems first.
// This can be done by running:
// gem update --system 3.6.9
// After updating RubyGems, try running the original command again:
// gem install nokogiri -v "< 1.15.1" && bundle install
// If the issue persists, you may need to check for compatibility issues with your Ruby version or 
// the specific version of Nokogiri you are trying to install.
// If you are using a specific Ruby version, ensure that the Nokogiri version is compatible with it.

//////////////////////////////
@AnatolyLysov ➜ /workspaces/db_tutorial (master) $ gem update --system 3.6.9
Fetching rubygems-update-3.6.9.gem
Successfully installed rubygems-update-3.6.9
Parsing documentation for rubygems-update-3.6.9
Installing ri documentation for rubygems-update-3.6.9
Done installing documentation for rubygems-update after 0 seconds
Parsing documentation for rubygems-update-3.6.9
Done installing documentation for rubygems-update after 0 seconds
Installing RubyGems 3.6.9
  Successfully built RubyGem
  Name: bundler
  Version: 2.6.9
  File: bundler-2.6.9.gem
Bundler 2.6.9 installed
RubyGems 3.6.9 installed
Regenerating binstubs
Regenerating plugins
Parsing documentation for rubygems-3.6.9
Installing ri documentation for rubygems-3.6.9

# 3.6.9 / 2025-05-13

## Enhancements:

* Add mtime to Gem::Package::TarWriter#add_file argument. Pull request
  [#8673](https://github.com/rubygems/rubygems/pull/8673) by unasuke
* Print webauthn authentication link as a separate line to make it easier
  to visit. Pull request
  [#8663](https://github.com/rubygems/rubygems/pull/8663) by mperham
* Remove shellwords autoload. Pull request
  [#8644](https://github.com/rubygems/rubygems/pull/8644) by
  deivid-rodriguez
* Installs bundler 2.6.9 as a default gem.

## Performance:

* Avoid unnecessary splat allocation. Pull request
  [#8640](https://github.com/rubygems/rubygems/pull/8640) by jeremyevans

## Documentation:

* Fix typo in Changelog for 3.6.0 / 2024-12-16. Pull request
  [#8638](https://github.com/rubygems/rubygems/pull/8638) by thatrobotdev

# 3.6.8 / 2025-04-13

## Enhancements:

* Installs bundler 2.6.8 as a default gem.

# 3.6.7 / 2025-04-03

## Enhancements:

* Sorting files in metadata for build reproducibility. Pull request
  [#8569](https://github.com/rubygems/rubygems/pull/8569) by
  giacomobenedetti
* Default to a SOURCE_DATE_EPOCH of 315619200, to simplify reproducible
  builds. Pull request
  [#8568](https://github.com/rubygems/rubygems/pull/8568) by duckinator
* Let `gem exec` raise an error in ambiguous cases. Pull request
  [#8573](https://github.com/rubygems/rubygems/pull/8573) by
  deivid-rodriguez
* Installs bundler 2.6.7 as a default gem.

## Performance:

* Speed up Version#<=> ~20-50% when lengths differ. Pull request
  [#8565](https://github.com/rubygems/rubygems/pull/8565) by skipkayhil

# 3.6.6 / 2025-03-13

## Enhancements:

* Update vendored uri to 1.0.3. Pull request
  [#8534](https://github.com/rubygems/rubygems/pull/8534) by hsbt
* Installs bundler 2.6.6 as a default gem.

## Bug fixes:

* Fix `gem rdoc` not working with newer versions of rdoc when not
  installed as default gems. Pull request
  [#8549](https://github.com/rubygems/rubygems/pull/8549) by
  deivid-rodriguez

# 3.6.5 / 2025-02-20

## Enhancements:

* Installs bundler 2.6.5 as a default gem.

## Documentation:

* Removed `gem server` from `gem help`. Pull request
  [#8507](https://github.com/rubygems/rubygems/pull/8507) by hsbt

# 3.6.4 / 2025-02-17

## Enhancements:

* Raise a simpler error when RubyGems fails to activate a dependency. Pull
  request [#8449](https://github.com/rubygems/rubygems/pull/8449) by
  deivid-rodriguez
* Installs bundler 2.6.4 as a default gem.

## Performance:

* Allocate strings from Requirement match only once. Pull request
  [#8245](https://github.com/rubygems/rubygems/pull/8245) by segiddins

# 3.6.3 / 2025-01-16

## Enhancements:

* Add credentials file path to `gem env`. Pull request
  [#8375](https://github.com/rubygems/rubygems/pull/8375) by duckinator
* Update SPDX license list as of 2024-12-30. Pull request
  [#8387](https://github.com/rubygems/rubygems/pull/8387) by
  github-actions[bot]
* Installs bundler 2.6.3 as a default gem.

## Bug fixes:

* Fix `@licenses` array unmarshalling. Pull request
  [#8411](https://github.com/rubygems/rubygems/pull/8411) by rykov

# 3.6.2 / 2024-12-23

## Security:

* Fix Gem::SafeMarshal buffer overrun when given lengths larger than fit
  into a byte. Pull request
  [#8305](https://github.com/rubygems/rubygems/pull/8305) by segiddins
* Improve type checking in marshal_load methods. Pull request
  [#8306](https://github.com/rubygems/rubygems/pull/8306) by segiddins

## Enhancements:

* Skip rdoc hooks and their tests on newer rdoc versions. Pull request
  [#8340](https://github.com/rubygems/rubygems/pull/8340) by
  deivid-rodriguez
* Installs bundler 2.6.2 as a default gem.

## Bug fixes:

* Fix serialized metadata including an empty `@original_platform`
  attribute. Pull request
  [#8355](https://github.com/rubygems/rubygems/pull/8355) by
  deivid-rodriguez

# 3.6.1 / 2024-12-17

## Enhancements:

* Installs bundler 2.6.1 as a default gem.

## Bug fixes:

* Fix `gem info` tagging some non default gems as default. Pull request
  [#8321](https://github.com/rubygems/rubygems/pull/8321) by
  deivid-rodriguez

## Documentation:

* Fix broken links. Pull request
  [#8327](https://github.com/rubygems/rubygems/pull/8327) by st0012

# 3.6.0 / 2024-12-16

## Security:

* Stop storing executable names in ivars. Pull request
  [#8307](https://github.com/rubygems/rubygems/pull/8307) by segiddins

## Breaking changes:

* Drop ruby 3.0 support. Pull request
  [#8091](https://github.com/rubygems/rubygems/pull/8091) by segiddins

## Features:

* Add --attestation option to gem push. Pull request
  [#8239](https://github.com/rubygems/rubygems/pull/8239) by segiddins

## Enhancements:

* Skip unresolved deps warning on `Gem::Specification.reset` on benign
  cases. Pull request
  [#8309](https://github.com/rubygems/rubygems/pull/8309) by
  deivid-rodriguez
* Let `gem install <name>` suggest `<name>-ruby` and `ruby-<name>` when
  providing "did you mean" suggestions. Pull request
  [#8197](https://github.com/rubygems/rubygems/pull/8197) by duckinator
* Update SPDX license list as of 2024-08-19. Pull request
  [#8233](https://github.com/rubygems/rubygems/pull/8233) by
  github-actions[bot]
* Add `--target-rbconfig` option to `gem install` and `gem update`
  commands. Pull request
  [#7628](https://github.com/rubygems/rubygems/pull/7628) by kateinoigakukun
* Skip nil-value keys to make metadata reproducible. Pull request
  [#7129](https://github.com/rubygems/rubygems/pull/7129) by nobu
* Allow disabling installation of compiled extensions into lib through
  `Gem.configuration.install_extension_in_lib`. Pull request
  [#6463](https://github.com/rubygems/rubygems/pull/6463) by hsbt
* Installs bundler 2.6.0 as a default gem.

## Bug fixes:

* Set $0 to exe when running `gem exec` to fix name in CLI output. Pull
  request [#8267](https://github.com/rubygems/rubygems/pull/8267) by adam12
* Fix manifest in gem package using incorrect platform sometimes. Pull
  request [#8202](https://github.com/rubygems/rubygems/pull/8202) by
  deivid-rodriguez

## Documentation:

* Fix missing single quote in git source example. Pull request
  [#8303](https://github.com/rubygems/rubygems/pull/8303) by nobu
* Update the `gem install` demo in README to use a gem that just works on
  Windows. Pull request
  [#8262](https://github.com/rubygems/rubygems/pull/8262) by soda92
* Unify rubygems and bundler docs directory. Pull request
  [#8159](https://github.com/rubygems/rubygems/pull/8159) by hsbt

# 3.5.23 / 2024-11-05

## Enhancements:

* Validate user input encoding of `gem` CLI arguments. Pull request
  [#6471](https://github.com/rubygems/rubygems/pull/6471) by
  deivid-rodriguez
* Fix `gem update --system` leaving old default bundler executables
  around. Pull request
  [#8172](https://github.com/rubygems/rubygems/pull/8172) by
  deivid-rodriguez
* Installs bundler 2.5.23 as a default gem.

## Bug fixes:

* Fix commands with 2 MFA requests when webauthn is enabled. Pull request
  [#8174](https://github.com/rubygems/rubygems/pull/8174) by
  deivid-rodriguez
* Make `--enable-load-relative` binstubs prolog work when Ruby is not
  installed in the same directory as the binstub. Pull request
  [#7872](https://github.com/rubygems/rubygems/pull/7872) by
  deivid-rodriguez

## Performance:

* Speed up `gem install <nonexistent-gem>` by finding alternative name
  suggestions faster. Pull request
  [#8084](https://github.com/rubygems/rubygems/pull/8084) by duckinator

## Documentation:

* Add missing comma in documentation. Pull request
  [#8152](https://github.com/rubygems/rubygems/pull/8152) by leoarnold

# 3.5.22 / 2024-10-16

## Enhancements:

* Prevent `._*` files in packages generated from macOS. Pull request
  [#8150](https://github.com/rubygems/rubygems/pull/8150) by
  deivid-rodriguez
* Fix `gem pristine etc` resetting gem twice sometimes. Pull request
  [#8117](https://github.com/rubygems/rubygems/pull/8117) by
  deivid-rodriguez
* Allow `gem pristine` to reset default gems too. Pull request
  [#8118](https://github.com/rubygems/rubygems/pull/8118) by
  deivid-rodriguez
* Update vendored `uri` and `net-http`. Pull request
  [#8112](https://github.com/rubygems/rubygems/pull/8112) by segiddins
* Installs bundler 2.5.22 as a default gem.

## Bug fixes:

* Fix `gem contents` for default gems. Pull request
  [#8132](https://github.com/rubygems/rubygems/pull/8132) by
  deivid-rodriguez
* Fix duplicated specs when they have been previously activated. Pull
  request [#8131](https://github.com/rubygems/rubygems/pull/8131) by
  deivid-rodriguez
* Fix `gem install` on NFS shares. Pull request
  [#8123](https://github.com/rubygems/rubygems/pull/8123) by
  deivid-rodriguez
* Fix a `gem install` crash during "done installing" hooks. Pull request
  [#8113](https://github.com/rubygems/rubygems/pull/8113) by
  deivid-rodriguez
* Fix plugin command loading. Pull request
  [#8121](https://github.com/rubygems/rubygems/pull/8121) by
  deivid-rodriguez

# 3.5.21 / 2024-10-03

## Enhancements:

* Fix `Gem::MissingSpecVersionError#to_s` not showing exception message.
  Pull request [#8074](https://github.com/rubygems/rubygems/pull/8074) by
  deivid-rodriguez
* Remove code that makes suggest_gems_from_name give worse results. Pull
  request [#8083](https://github.com/rubygems/rubygems/pull/8083) by
  duckinator
* Warning about PATH in `--user-install` mode is only necessary for gems
  with executables. Pull request
  [#8071](https://github.com/rubygems/rubygems/pull/8071) by
  deivid-rodriguez
* Installs bundler 2.5.21 as a default gem.

## Bug fixes:

* Fix error in one source when fetching dependency APIs clearing results
  from all sources. Pull request
  [#8080](https://github.com/rubygems/rubygems/pull/8080) by
  deivid-rodriguez
* Fix `gem cleanup` warning when two versions of psych installed. Pull
  request [#8072](https://github.com/rubygems/rubygems/pull/8072) by
  deivid-rodriguez

# 3.5.20 / 2024-09-24

## Enhancements:

* Installs bundler 2.5.20 as a default gem.

# 3.5.19 / 2024-09-18

## Enhancements:

* Standardize pretty-print output for `Gem::Source` and subclasses. Pull
  request [#7994](https://github.com/rubygems/rubygems/pull/7994) by
  djberube
* Update vendored `molinillo` to master and vendored `resolv` to 0.4.0.
  Pull request [#7521](https://github.com/rubygems/rubygems/pull/7521) by
  hsbt
* Installs bundler 2.5.19 as a default gem.

## Bug fixes:

* Fix `bundle exec rake install` failing when local gem has extensions.
  Pull request [#7977](https://github.com/rubygems/rubygems/pull/7977) by
  deivid-rodriguez
* Make `gem exec` use the standard GEM_HOME. Pull request
  [#7982](https://github.com/rubygems/rubygems/pull/7982) by
  deivid-rodriguez
* Fix `gem fetch` always exiting with zero status code. Pull request
  [#8007](https://github.com/rubygems/rubygems/pull/8007) by
  deivid-rodriguez
* Remove temporary `.lock` files unintentionally left around by gem
  installer. Pull request
  [#7939](https://github.com/rubygems/rubygems/pull/7939) by nobu
* Removed unused stringio. Pull request
  [#8001](https://github.com/rubygems/rubygems/pull/8001) by hsbt
* Avoid another race condition of open mode. Pull request
  [#7931](https://github.com/rubygems/rubygems/pull/7931) by nobu
* Fix `@license` typo preventing licenses from being correctly
  unmarshalled. Pull request
  [#7975](https://github.com/rubygems/rubygems/pull/7975) by djberube

## Performance:

* Fix `gem install does-not-exist` being super slow. Pull request
  [#8006](https://github.com/rubygems/rubygems/pull/8006) by
  deivid-rodriguez

# 3.5.18 / 2024-08-26

## Enhancements:

* Installs bundler 2.5.18 as a default gem.

## Bug fixes:

* Fix `gem uninstall <name>:<version>` failing on shadowed default gems.
  Pull request [#7949](https://github.com/rubygems/rubygems/pull/7949) by
  deivid-rodriguez

# 3.5.17 / 2024-08-01

## Enhancements:

* Explicitly encode `Gem::Dependency` to yaml. Pull request
  [#7867](https://github.com/rubygems/rubygems/pull/7867) by segiddins
* Installs bundler 2.5.17 as a default gem.

## Bug fixes:

* Fix `gem list` regression when a regular gem shadows a default one. Pull
  request [#7892](https://github.com/rubygems/rubygems/pull/7892) by
  deivid-rodriguez
* Always leave default gem executables around. Pull request
  [#7879](https://github.com/rubygems/rubygems/pull/7879) by
  deivid-rodriguez
* Fix line comment issue for hash when loading gemrc. Pull request
  [#7857](https://github.com/rubygems/rubygems/pull/7857) by leetking

# 3.5.16 / 2024-07-18

## Enhancements:

* Installs bundler 2.5.16 as a default gem.

## Bug fixes:

* Fix gemspec `require_paths` validation. Pull request
  [#7866](https://github.com/rubygems/rubygems/pull/7866) by
  deivid-rodriguez
* Fix loading of nested `gemrc` config keys when specified as symbols.
  Pull request [#7851](https://github.com/rubygems/rubygems/pull/7851) by
  moofkit

## Performance:

* Use `caller_locations` instead of splitting `caller`. Pull request
  [#7708](https://github.com/rubygems/rubygems/pull/7708) by nobu

# 3.5.15 / 2024-07-09

## Enhancements:

* Installs bundler 2.5.15 as a default gem.

## Bug fixes:

* Restrict generic `arm` to only match 32-bit arm. Pull request
  [#7830](https://github.com/rubygems/rubygems/pull/7830) by ntkme
* Protect creating binstubs with a file lock. Pull request
  [#7806](https://github.com/rubygems/rubygems/pull/7806) by
  deivid-rodriguez

## Documentation:

* Make it clearer that `add_dependency` is the main way to add
  non-development dependencies. Pull request
  [#7800](https://github.com/rubygems/rubygems/pull/7800) by jeromedalbert

# 3.5.14 / 2024-06-21

## Enhancements:

* Installs bundler 2.5.14 as a default gem.

## Bug fixes:

* Make "bundler? update --bundler" behave identically. Pull request
  [#7778](https://github.com/rubygems/rubygems/pull/7778) by x-yuri

# 3.5.13 / 2024-06-14

## Enhancements:

* Installs bundler 2.5.13 as a default gem.

## Bug fixes:

* Never remove executables that may belong to a default gem. Pull request
  [#7747](https://github.com/rubygems/rubygems/pull/7747) by
  deivid-rodriguez

# 3.5.12 / 2024-06-13

## Enhancements:

* Installs bundler 2.5.12 as a default gem.

## Bug fixes:

* Fix `gem uninstall` unresolved specifications warning. Pull request
  [#7667](https://github.com/rubygems/rubygems/pull/7667) by
  deivid-rodriguez
* Fix `gem pristine` sometimes failing to pristine user installed gems.
  Pull request [#7664](https://github.com/rubygems/rubygems/pull/7664) by
  deivid-rodriguez


------------------------------------------------------------------------------

RubyGems installed the following executables:
        /usr/local/rvm/rubies/ruby-3.3.4/bin/gem
        /usr/local/rvm/rubies/ruby-3.3.4/bin/bundle
        /usr/local/rvm/rubies/ruby-3.3.4/bin/bundler

Ruby Interactive (ri) documentation was installed. ri is kind of like man 
pages for Ruby libraries. You may access it like this:
  ri Classname
  ri Classname.class_method
  ri Classname#instance_method
If you do not wish to install this documentation in the future, use the
--no-document flag, or set it as the default in your ~/.gemrc file. See
'gem help env' for details.

RubyGems system software updated
////////////////////////////////////
@AnatolyLysov ➜ /workspaces/db_tutorial (master) $ gem install nokogiri -v "< 1.15.1" && bundle install
Building native extensions. This could take a while...
ERROR:  Error installing nokogiri:
        ERROR: Failed to build gem native extension.

    current directory: /usr/local/rvm/gems/ruby-3.3.4/gems/nokogiri-1.15.0/ext/nokogiri
/usr/local/rvm/rubies/ruby-3.3.4/bin/ruby extconf.rb
checking for whether -std=c99 is accepted as CFLAGS... no
checking for whether -Wno-declaration-after-statement is accepted as CFLAGS... no
checking for whether -O2 is accepted as CFLAGS... no
checking for whether -g is accepted as CFLAGS... no
checking for whether -Winline is accepted as CFLAGS... no
checking for whether -Wmissing-noreturn is accepted as CFLAGS... no
checking for whether -Wconversion -Wno-sign-conversion is accepted as CFLAGS... no
Building nokogiri using packaged libraries.
Static linking is enabled.
Cross build is disabled.
Using mini_portile version 2.8.9
checking for iconv... yes
---------- IMPORTANT NOTICE ----------
Building Nokogiri with a packaged version of libxml2-2.11.3.
Configuration options: --host\=x86_64-pc-linux --enable-static --disable-shared --libdir\=/usr/local/rvm/gems/ruby-3.3.4/gems/nokogiri-1.15.0/ports/x86_64-linux/libxml2/2.11.3/lib --with-iconv\=yes --disable-dependency-tracking --without-python --without-readline --with-c14n --with-debug --with-threads --disable-shared --enable-static CPPFLAGS\= CFLAGS\=-O2\ -U_FORTIFY_SOURCE\ -g\ -fPIC
The following patches are being applied:
  - 0001-Remove-script-macro-support.patch
  - 0002-Update-entities-to-remove-handling-of-ssi.patch
  - 0003-libxml2.la-is-in-top_builddir.patch
  - 0009-allow-wildcard-namespaces.patch
  - 0010-update-config.guess-and-config.sub-for-libxml2.patch
  - 0011-rip-out-libxml2-s-libc_single_threaded-support.patch

The Nokogiri maintainers intend to provide timely security updates, but if
this is a concern for you and want to use your OS/distro system library
instead, then abort this installation process and install nokogiri as
instructed at:

  https://nokogiri.org/tutorials/installing_nokogiri.html#installing-using-standard-system-libraries

Note, however, that nokogiri cannot guarantee compatibility with every
version of libxml2 that may be provided by OS/package vendors.

Extracting libxml2-2.11.3.tar.xz into tmp/x86_64-pc-linux/ports/libxml2/2.11.3... OK
Running git apply with /usr/local/rvm/gems/ruby-3.3.4/gems/nokogiri-1.15.0/patches/libxml2/0001-Remove-script-macro-support.patch... OK
Running git apply with /usr/local/rvm/gems/ruby-3.3.4/gems/nokogiri-1.15.0/patches/libxml2/0002-Update-entities-to-remove-handling-of-ssi.patch... OK
Running git apply with /usr/local/rvm/gems/ruby-3.3.4/gems/nokogiri-1.15.0/patches/libxml2/0003-libxml2.la-is-in-top_builddir.patch... OK
Running git apply with /usr/local/rvm/gems/ruby-3.3.4/gems/nokogiri-1.15.0/patches/libxml2/0009-allow-wildcard-namespaces.patch... OK
Running git apply with /usr/local/rvm/gems/ruby-3.3.4/gems/nokogiri-1.15.0/patches/libxml2/0010-update-config.guess-and-config.sub-for-libxml2.patch... OK
Running git apply with /usr/local/rvm/gems/ruby-3.3.4/gems/nokogiri-1.15.0/patches/libxml2/0011-rip-out-libxml2-s-libc_single_threaded-support.patch... OK
Running 'configure' for libxml2 2.11.3... OK
Running 'compile' for libxml2 2.11.3... OK
Running 'install' for libxml2 2.11.3... OK
Activating libxml2 2.11.3 (from /usr/local/rvm/gems/ruby-3.3.4/gems/nokogiri-1.15.0/ports/x86_64-linux/libxml2/2.11.3)...
Using mini_portile version 2.8.9
---------- IMPORTANT NOTICE ----------
Building Nokogiri with a packaged version of libxslt-1.1.38.
Configuration options: --host\=x86_64-pc-linux --enable-static --disable-shared --libdir\=/usr/local/rvm/gems/ruby-3.3.4/gems/nokogiri-1.15.0/ports/x86_64-linux/libxslt/1.1.38/lib --disable-dependency-tracking --without-python --without-crypto --with-debug --with-libxml-prefix\=/usr/local/rvm/gems/ruby-3.3.4/gems/nokogiri-1.15.0/ports/x86_64-linux/libxml2/2.11.3 --disable-shared --enable-static CFLAGS\=-O2\ -U_FORTIFY_SOURCE\ -g\ -fPIC
The following patches are being applied:
  - 0001-update-config.guess-and-config.sub-for-libxslt.patch

The Nokogiri maintainers intend to provide timely security updates, but if
this is a concern for you and want to use your OS/distro system library
instead, then abort this installation process and install nokogiri as
instructed at:

  https://nokogiri.org/tutorials/installing_nokogiri.html#installing-using-standard-system-libraries

Extracting libxslt-1.1.38.tar.xz into tmp/x86_64-pc-linux/ports/libxslt/1.1.38... OK
Running git apply with /usr/local/rvm/gems/ruby-3.3.4/gems/nokogiri-1.15.0/patches/libxslt/0001-update-config.guess-and-config.sub-for-libxslt.patch... OK
Running 'configure' for libxslt 1.1.38... OK
Running 'compile' for libxslt 1.1.38... OK
Running 'install' for libxslt 1.1.38... OK
Activating libxslt 1.1.38 (from /usr/local/rvm/gems/ruby-3.3.4/gems/nokogiri-1.15.0/ports/x86_64-linux/libxslt/1.1.38)...
checking for whether -DNOKOGIRI_PACKAGED_LIBRARIES is accepted as CPPFLAGS... no
xml2-config cflags: -I/usr/local/rvm/gems/ruby-3.3.4/gems/nokogiri-1.15.0/ports/x86_64-linux/libxml2/2.11.3/include/libxml2
checking for whether -DNOKOGIRI_LIBXML2_PATCHES="\"0001-Remove-script-macro-support.patch 0002-Update-entities-to-remove-handling-of-ssi.patch 0003-libxml2.la-is-in-top_builddir.patch 0009-allow-wildcard-namespaces.patch 0010-update-config.guess-and-config.sub-for-libxml2.patch 0011-rip-out-libxml2-s-libc_single_threaded-support.patch\"" is accepted as CPPFLAGS... no
checking for -llzma... yes
xslt-config cflags: -I/usr/local/rvm/gems/ruby-3.3.4/gems/nokogiri-1.15.0/ports/x86_64-linux/libxml2/2.11.3/include/libxml2 -I/usr/local/rvm/gems/ruby-3.3.4/gems/nokogiri-1.15.0/ports/x86_64-linux/libxslt/1.1.38/include
checking for whether -DNOKOGIRI_LIBXSLT_PATCHES="\"0001-update-config.guess-and-config.sub-for-libxslt.patch\"" is accepted as CPPFLAGS... no
checking for xmlParseDoc() in libxml/parser.h... yes
checking for xsltParseStylesheetDoc() in libxslt/xslt.h... yes
checking for exsltFuncRegister() in libexslt/exslt.h... yes
Using mini_portile version 2.8.9
---------- IMPORTANT NOTICE ----------
Building Nokogiri with a packaged version of libgumbo-1.0.0-nokogiri.
Configuration options: --disable-shared --enable-static CFLAGS\=-fPIC
Copying gumbo-parser files into tmp/x86_64-pc-linux/ports/libgumbo/1.0.0-nokogiri/gumbo-parser...
Running 'compile' for libgumbo 1.0.0-nokogiri... OK
Activating libgumbo 1.0.0-nokogiri (from ports/x86_64-linux/libgumbo/1.0.0-nokogiri)...
checking for whether -I/usr/local/rvm/gems/ruby-3.3.4/gems/nokogiri-1.15.0/ext/nokogiri/ports/x86_64-linux/libgumbo/1.0.0-nokogiri/include is accepted as CPPFLAGS... no
checking for gumbo_parse_with_options() in nokogiri_gumbo.h... yes
checking for xmlHasFeature()... yes
checking for xmlFirstElementChild()... yes
checking for xmlRelaxNGSetParserStructuredErrors()... yes
checking for xmlRelaxNGSetValidStructuredErrors()... yes
checking for xmlSchemaSetValidStructuredErrors()... yes
checking for xmlSchemaSetParserStructuredErrors()... yes
checking for rb_gc_location()... yes
checking for rb_category_warning()... yes
checking for whether -DNOKOGIRI_OTHER_LIBRARY_VERSIONS="\"libgumbo:1.0.0-nokogiri\"" is accepted as CPPFLAGS... no
creating Makefile

current directory: /usr/local/rvm/gems/ruby-3.3.4/gems/nokogiri-1.15.0/ext/nokogiri
make DESTDIR\= sitearchdir\=./.gem.20250526-22877-wxuspr sitelibdir\=./.gem.20250526-22877-wxuspr clean

current directory: /usr/local/rvm/gems/ruby-3.3.4/gems/nokogiri-1.15.0/ext/nokogiri
make DESTDIR\= sitearchdir\=./.gem.20250526-22877-wxuspr sitelibdir\=./.gem.20250526-22877-wxuspr
compiling gumbo.c
warning: unknown warning option '-Wno-cast-function-type'; did you mean '-Wno-bad-function-cast'? [-Wunknown-warning-option]
gumbo.c:32:10: fatal error: 'nokogiri_gumbo.h' file not found
#include "nokogiri_gumbo.h"
         ^~~~~~~~~~~~~~~~~~
1 warning and 1 error generated.
make: *** [Makefile:472: gumbo.o] Error 1

make failed, exit code 2

Gem files will remain installed in /usr/local/rvm/gems/ruby-3.3.4/gems/nokogiri-1.15.0 for inspection.
Results logged to /usr/local/rvm/gems/ruby-3.3.4/extensions/x86_64-linux/3.3.0/nokogiri-1.15.0/gem_make.out
///////////////////////////