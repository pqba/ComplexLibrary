{ pkgs }: {
	deps = [
   pkgs.tree
   pkgs.gh
		pkgs.clang_12
		pkgs.ccls
		pkgs.gdb
		pkgs.gnumake
	];
}